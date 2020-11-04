# pyctp说明

1) 用pybind11封装
python调用的数据（如结构体）均采用c++ wrapper版本，而非各用各自数据类型。后一做法，官网的评论：

”They are very convenient, but keep in mind that these conversions are fundamentally based on copying data. This is perfectly fine for small immutable types but it may become quite expensive for large data structures. This can be avoided by overriding the automatic conversion with a custom wrapper (i.e. the above-mentioned approach 1). “

但好像速度差异不大。

2) 给结构体增加了__copy__（供copy调用）和to_dict方法，以及内置gb2312->utf8的编码转换


3) 数据类型及其包括的常量均已封装python接口，例如

`>>> from pyctp import *`

`>>> print(TThostFtdcRiskLevelType)`

`{'THOST_FTDC_FAS_Low': '1', 'THOST_FTDC_FAS_Normal': '2', 'THOST_FTDC_FAS_Focus': '3', 'THOST_FTDC_FAS_Risk': '4'}`

`>>> print(THOST_FTDC_FAS_Low)`

`'1'`

4) API和SPI封装为一个Handler，可调用API的主动函数和重载SPI的回调函数
行情接口：CMduserHandler
交易接口：CTraderHandler

所有函数的使用均同官方文档。只新增了一个connect函数，用于对API进行初始化。

5) 行情数据延迟1~2s


# 编译说明

1）使用visual studio 2019

2）打开pyctp.sln

3）修改python的include和lib文件路径和pybind11的include文件路径

4）build

