#include <pybind11/pybind11.h>
#include "encoding.h"

namespace py = pybind11;


//IconvConvertString g_icc("gb2312", "utf-8");

void init_data_types(py::module_&);
void init_structs(py::module_&);
void init_mduserapi(py::module_&);
void init_traderapi(py::module_&);

PYBIND11_MODULE(pyctp, m) {
    init_structs(m);
    init_mduserapi(m);
    init_traderapi(m);
    init_data_types(m); 
}

//int main() {
//    py::scoped_interpreter guard{};
//
//    auto m2 = py::module::import("md_demo");
//    auto main_f = m2.attr("main");
//    main_f();
//}