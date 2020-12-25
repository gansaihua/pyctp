#pragma once

#include <pybind11/pybind11.h>

namespace py = pybind11;


inline py::str encoding_cast(const char a[], const char* encoding = "gb2312") {
	std::string s = a;
	PyObject* o = PyUnicode_Decode(s.data(), s.length(), encoding, "Decode fail.");
	return py::reinterpret_borrow<py::str>(o);
};


//#include <iconv.h>
//
//class IconvConvertString {
//private:
//	iconv_t cd;
//public:
//	IconvConvertString() = delete;
//	IconvConvertString(const IconvConvertString&) = delete;
//	IconvConvertString& operator = (const IconvConvertString&) = delete;
//	IconvConvertString(const char* from_charset, const char* to_charset) { cd = iconv_open(to_charset, from_charset); }
//	~IconvConvertString() { iconv_close(cd); }
//
//	size_t encoding_cast(char* inbuf, size_t inlen, char* outbuf, size_t outlen) {
//		char** pin = &inbuf;
//		char** pout = &outbuf;
//		memset(outbuf, 0, outlen);
//		return iconv(cd, pin, (size_t*)&inlen, pout, (size_t*)&outlen);
//	}
//};
//
//extern IconvConvertString g_icc;
