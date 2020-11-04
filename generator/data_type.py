class DataTypeGenerator(object):
    def __init__(self, filename_in, filename_out):
        self.file_in = open(filename_in, 'r', encoding='gb18030')
        self.file_out = open(filename_out, 'w')

        self.value_temp = {}
        self.result = {}

    def run(self):
        for line in self.file_in:
            self.process(line)

        self.write_definition()

        self.file_in.close()
        self.file_out.close()

    def process(self, line: str):
        line = line.replace("\n", "").replace(";", "").strip()
        words = [word for word in line.split(' ') if word.strip()]
        if len(words) != 3:
            return

        a, b, c = words
        if a not in ['#define', 'typedef']:
            return

        if a == 'typedef' and self.value_temp:
            self.result.update({c: self.value_temp.copy()})
            self.value_temp.clear()
        elif a == '#define':
            self.value_temp.update({b: c})

    def write_definition(self):
        prefix = 'Py'
        for name, values in self.result.items():
            buffer = f'\npy::dict {prefix}{name};\n'
            for k, v in values.items():
                buffer += f'{prefix}{name}["{k}"] = {k};\n'
            self.file_out.write(buffer)

            buffer = f'm.attr("{name}") = {prefix}{name};\n'
            self.file_out.write(buffer)

            for k, v in values.items():
                buffer = f'm.attr("{k}") = {k};\n'
                self.file_out.write(buffer)


if __name__ == "__main__":
    generator = DataTypeGenerator('../20200106_tradeapi64_se_windows/ThostFtdcUserApiDataType.h', "_def_dtypes.txt")
    generator.run()
