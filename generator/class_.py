handler_mapping = {
    'CThostFtdcMdApi': 'CMduserHandler',
    'CThostFtdcMdSpi': 'CMduserHandler',
    'CThostFtdcTraderApi': 'CTraderHandler',
    'CThostFtdcTraderSpi': 'CTraderHandler',
}


class ClassMethodGenerator(object):
    def __init__(self, filename_in):
        self.file_in = open(filename_in, 'r', encoding='gb18030')
        self.file_out = None

        self.class_ = None
        self.r_types = []
        self.f_names = []
        self.params = []
        self.classes = []

    def run(self):
        for line in self.file_in:
            self.process_line(line)

        self.write_function_action()
        self.write_function_virtual_override()
        self.write_pybind11_def()

        self.file_in.close()

    def process_line(self, line: str):
        line = line.replace("\n", "").replace(";", "").strip()

        if line.startswith("class"):
            self.process_class(line)
        elif line.startswith("virtual"):
            self.process_method(line)

    def process_class(self, line: str):
        words = [word for word in line.split(" ") if word]
        name = words[-1]

        if self.class_ != name:
            self.class_ = name

    def process_method(self, line):
        # 解析函数名
        length = len(line)
        idx2 = line.find('(')
        idx1 = length - line[::-1].find(' ', length - idx2)
        f_name = line[idx1:idx2]

        # 解析输出类型
        idx2 = idx1 - 1
        idx1 = len('virtual') + 1
        r_type = line[idx1:idx2]

        if f_name[0] == '*':
            f_name = f_name[1:]
            r_type += '*'

        # 解析参数列表
        params = {}
        idx1 = line.find('(') + 1
        idx2 = line.find(')')
        p = line[idx1:idx2].strip()
        if p:
            p = [x.strip() for x in p.split(',')]
            for x in p:
                type_, name = x.split(' ', maxsplit=1)
                type_ = type_.strip()
                name = name.strip()
                if name[0] == '*':
                    type_ += '*'
                    name = name[1:].strip()

                params[type_] = name

        self.classes.append(self.class_)
        self.r_types.append(r_type)
        self.f_names.append(f_name)
        self.params.append(params)

    def write_function_action(self):
        prev = None
        for i in range(len(self.classes)):
            class_ = self.classes[i]
            r_type = self.r_types[i]
            f_name = self.f_names[i]
            params = self.params[i]

            # 输出处理, 按类加以区分
            if class_.endswith('Api'):

                if class_ != prev:
                    prev = class_
                    f_handle = open(f'_def_{class_}.txt', 'w')

                new_line = f'{r_type} {f_name}('
                sub_line = '('
                for type_, name in params.items():
                    sub_line += f'{name}, '
                    new_line += f'{type_} {name}, '

                if params:
                    sub_line = sub_line[:-2]
                    new_line = new_line[:-2]

                new_line += f') {{\n'
                if r_type != 'void':
                    new_line += 'return '

                new_line += f'm_api->{f_name}' + sub_line + ');'
                new_line += '\n}\n\n'

                f_handle.write(new_line)

    def write_function_virtual_override(self):
        """
        对Spi写入封装定义函数
            void OnFrontConnected() override
            { PYBIND11_OVERRIDE_PURE(void, CMduserHandler, onFrontConnected, ); }
        """
        prev = None
        for i in range(len(self.classes)):
            class_ = self.classes[i]
            r_type = self.r_types[i]
            f_name = self.f_names[i]
            params = self.params[i]

            if class_.endswith('Spi'):
                if class_ != prev:
                    prev = class_
                    f_handle = open(f'_def_{class_}_pybind11.txt', 'w')

                new_line = f'{r_type} {f_name}('
                sub_line = ''
                for type_, name in params.items():
                    new_line += f'{type_} {name}, '
                    sub_line += f'{name}, '

                if params:
                    new_line = new_line[:-2]
                    sub_line = sub_line[:-2]
                new_line += ') '
                sub_line += ')'

                handler = handler_mapping[self.classes[i]]

                new_line += 'override { PYBIND11_OVERRIDE('
                new_line += f'{r_type}, {handler}, {f_name}, '

                new_line += sub_line + ';}\n'
                f_handle.write(new_line)

    def write_pybind11_def(self):
        """
        最后写入封装接口python端函数
            .def("connect", &CMduserHandler::connect)
        """
        handler = None
        new_line = '.def(py::init<>())\n'
        for i in range(len(self.classes)):
            f_name = self.f_names[i]

            if self.classes[i] == 'CThostFtdcMdApi':
                handler = 'CMduserHandler'
                new_line += f'.def("{f_name}", &{handler}::{f_name})\n'
            elif self.classes[i] == 'CThostFtdcMdSpi':
                handler = 'CMduserHandler'
                new_line += f'.def("{f_name}", &{handler}::{f_name})\n'

        if handler is not None:
            f = open(f'_def_{handler}_pybind11.txt', 'w')
            f.write(new_line)
            f.close()

        handler = None
        new_line = '.def(py::init<>())\n'
        for i in range(len(self.classes)):
            f_name = self.f_names[i]

            if self.classes[i] == 'CThostFtdcTraderApi':
                handler = 'CTraderHandler'
                new_line += f'.def("{f_name}", &{handler}::{f_name})\n'
            elif self.classes[i] == 'CThostFtdcTraderSpi':
                handler = 'CTraderHandler'
                new_line += f'.def("{f_name}", &{handler}::{f_name})\n'

        if handler is not None:
            f = open(f'_def_{handler}_pybind11.txt', 'w')
            f.write(new_line)
            f.close()


if __name__ == "__main__":
    generator = ClassMethodGenerator('../pyctp/ctp/ThostFtdcTraderApi.h')
    generator.run()

    generator = ClassMethodGenerator('../pyctp/ctp/ThostFtdcMdApi.h')
    generator.run()
