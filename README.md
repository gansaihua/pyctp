# pyctp说明

1）采用pybind11封装，所有接口同官方文档
支持window版本，但采用cmake编译，适配linux很简单。

2）结构体采用了编码转换，当访问对应字段时调用。

3）使用需要三个文件：

编译生成的pyctp.pyd, 和两个dll文件
>> import pyctp

结构体字段的输入，有时是多种选择，将其封装为dict，方便参考和使用，如
>> print(pyctp.TThostFtdcWeakPasswordSourceType)

4）示例见demo文件夹
