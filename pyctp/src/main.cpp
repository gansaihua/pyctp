#include <pybind11/pybind11.h>

namespace py = pybind11;


void init_data_types(py::module_&);
void init_structs(py::module_&);
void init_md_api(py::module_&);
void init_md_spi(py::module_&);
void init_td_api(py::module_&);
void init_td_spi(py::module_&);

PYBIND11_MODULE(pyctp, m) {
    init_data_types(m);
    init_structs(m);
    init_md_api(m);
    init_md_spi(m);
    init_td_api(m);
    init_td_spi(m);
}
