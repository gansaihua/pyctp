#include "ThostFtdcMdApi.h"

#include <vector>
#include <string>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


void init_md_api(py::module_& m) {
    py::class_<CThostFtdcMdApi, std::unique_ptr<CThostFtdcMdApi, py::nodelete>>(m, "CThostFtdcMdApi")
        .def_static("CreateFtdcMdApi", &CThostFtdcMdApi::CreateFtdcMdApi)
        .def_static("GetApiVersion", &CThostFtdcMdApi::GetApiVersion)
        .def("GetTradingDay", &CThostFtdcMdApi::GetTradingDay)
        .def("Release", &CThostFtdcMdApi::Release)
        .def("Init", &CThostFtdcMdApi::Init)
        .def("Join", &CThostFtdcMdApi::Join)
        .def("RegisterFront", &CThostFtdcMdApi::RegisterFront)
        .def("RegisterNameServer", &CThostFtdcMdApi::RegisterNameServer)
        .def("RegisterFensUserInfo", &CThostFtdcMdApi::RegisterFensUserInfo)
        .def("RegisterSpi", &CThostFtdcMdApi::RegisterSpi)
        .def("ReqUserLogin", &CThostFtdcMdApi::ReqUserLogin)
        .def("ReqUserLogout", &CThostFtdcMdApi::ReqUserLogout)
        .def("ReqQryMulticastInstrument", &CThostFtdcMdApi::ReqQryMulticastInstrument)
        .def("SubscribeMarketData", [](CThostFtdcMdApi& self, std::vector<std::string> vs, int nCount) {std::vector<char*> vc; vc.reserve(nCount); for (auto& s : vs) vc.push_back(const_cast<char*>(s.c_str())); return self.SubscribeMarketData(vc.data(), (int)vc.size());})
        .def("UnSubscribeMarketData", [](CThostFtdcMdApi& self, std::vector<std::string> vs, int nCount) {std::vector<char*> vc; vc.reserve(nCount); for (auto& s : vs) vc.push_back(const_cast<char*>(s.c_str())); return self.UnSubscribeMarketData(vc.data(), (int)vc.size());})
        .def("SubscribeForQuoteRsp", [](CThostFtdcMdApi& self, std::vector<std::string> vs, int nCount) {std::vector<char*> vc; vc.reserve(nCount); for (auto& s : vs) vc.push_back(const_cast<char*>(s.c_str())); return self.SubscribeForQuoteRsp(vc.data(), (int)vc.size());})
        .def("UnSubscribeForQuoteRsp", [](CThostFtdcMdApi& self, std::vector<std::string> vs, int nCount) {std::vector<char*> vc; vc.reserve(nCount); for (auto& s : vs) vc.push_back(const_cast<char*>(s.c_str())); return self.UnSubscribeForQuoteRsp(vc.data(), (int)vc.size());})
        ;
}
