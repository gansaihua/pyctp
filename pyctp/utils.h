#pragma once

#include <pybind11/pybind11.h>


namespace py = pybind11;

inline py::str encoding_cast(char a[]) {
	std::string s = a;
	PyObject* o = PyUnicode_Decode(s.data(), s.length(), "gb2312", "0");
	return py::reinterpret_borrow<py::str>(o);
};
