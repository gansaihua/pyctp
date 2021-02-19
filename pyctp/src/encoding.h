#pragma once

#include <pybind11/pybind11.h>

namespace py = pybind11;


inline py::str encoding_cast(const char a[], const char* encoding = "gb2312") {
	std::string s = a;
	PyObject* o = PyUnicode_Decode(s.data(), s.length(), encoding, "Decode fail.");
	return py::reinterpret_borrow<py::str>(o);
};
