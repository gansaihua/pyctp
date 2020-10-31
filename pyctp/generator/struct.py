import re


class StructGenerator(object):
    f_in1 = '../20200106_tradeapi64_se_windows/ThostFtdcUserApiDataType.h'
    f_in2 = '../20200106_tradeapi64_se_windows/ThostFtdcUserApiStruct.h'
    f_out = '_def_structs.txt'

    def __init__(self):
        self.name = None
        self.dtype_maps = {}

    def _get_dtype_maps(self):
        f = open(self.f_in1, 'r', encoding='gb2312')
        for line in f:
            words = [w.strip() for w in line.strip().split(' ')]
            if len(words) == 3 and words[0] == 'typedef':
                m = re.match(r'^(\w+)(\[\d+]);$', words[2])
                if m:
                    name = m.group(1)
                    dtype = words[1] + m.group(2)
                else:
                    name = words[2][:-1]  # skip the ';'
                    dtype = words[1]
                self.dtype_maps[name] = dtype
        f.close()

    def _write_structs(self):
        f = open(self.f_in2, 'r', encoding='gb2312')
        f2 = open(self.f_out, 'w')

        buffer = None
        for line in f:
            words = [w.strip() for w in line.strip().split()]
            if not words:
                continue

            if words[0] == 'struct':
                if buffer is not None:
                    buffer += f'.def("keys", [](const {self.name} &a) {{ std::vector<std::string> b = '
                    buffer += '{"' + '", "'.join(fields) + '"}; '
                    buffer += 'return b;});\n'
                    f2.write(buffer)

                self.name = words[1]
                buffer = f'''
py::class_<{self.name}>(m, "{self.name}")
.def(py::init<>())
.def("__copy__", [](const {self.name} &a) {{return {self.name}(a);}})
'''
                fields = []
            elif words[0].startswith('TThost'):
                dtype = self.dtype_maps[words[0]]
                field = words[1][:-1]  # skip the ';'

                fields.append(field)

                m = re.match(r'^char\[(\d+)]$', dtype)
                if m:
                    size = int(m.group(1))
                    # buffer += f'.def_property("{field}", []({self.name} &a) {{char ret[{size+1}]; g_icc.encoding_cast(a.{field}, {size}, ret, {size+1}); return std::string(ret);}}, []({self.name} &a, char c[]) {{strcpy(a.{field}, c);}})'
                    buffer += f'.def_property("{field}", []({self.name} &a) {{return encoding_cast(a.{field});}}, []({self.name} &a, char c[]) {{strcpy(a.{field}, c);}})'
                    buffer += '\n'
                else:
                    buffer += f'.def_readwrite("{field}", &{self.name}::{field})'
                    buffer += '\n'


        f2.close()
        f.close()

    def run(self):
        self._get_dtype_maps()
        self._write_structs()


if __name__ == "__main__":
    generator = StructGenerator()
    generator.run()
