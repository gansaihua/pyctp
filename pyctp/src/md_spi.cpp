#include "ThostFtdcMdApi.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;


class PyThostFtdcMdSpi : public CThostFtdcMdSpi {
public:
    using CThostFtdcMdSpi::CThostFtdcMdSpi;

    void OnFrontConnected() override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnFrontConnected, ); }
    void OnFrontDisconnected(int nReason) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnFrontDisconnected, nReason); }
    void OnHeartBeatWarning(int nTimeLapse) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnHeartBeatWarning, nTimeLapse); }
    void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRspUserLogin, pRspUserLogin, pRspInfo, nRequestID, bIsLast); }
    void OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRspUserLogout, pUserLogout, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryMulticastInstrument(CThostFtdcMulticastInstrumentField* pMulticastInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRspQryMulticastInstrument, pMulticastInstrument, pRspInfo, nRequestID, bIsLast); }
    void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRspError, pRspInfo, nRequestID, bIsLast); }
    void OnRspSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRspSubMarketData, pSpecificInstrument, pRspInfo, nRequestID, bIsLast); }
    void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRspUnSubMarketData, pSpecificInstrument, pRspInfo, nRequestID, bIsLast); }
    void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRspSubForQuoteRsp, pSpecificInstrument, pRspInfo, nRequestID, bIsLast); }
    void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRspUnSubForQuoteRsp, pSpecificInstrument, pRspInfo, nRequestID, bIsLast); }
    void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRtnDepthMarketData, pDepthMarketData); }
    void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField* pForQuoteRsp) override { PYBIND11_OVERRIDE(void, CThostFtdcMdSpi, OnRtnForQuoteRsp, pForQuoteRsp); }
};

void init_md_spi(py::module_& m) {
    py::class_<CThostFtdcMdSpi, PyThostFtdcMdSpi>(m, "CThostFtdcMdSpi")
        .def(py::init<>())
        .def("OnFrontConnected", &CThostFtdcMdSpi::OnFrontConnected)
        .def("OnFrontDisconnected", &CThostFtdcMdSpi::OnFrontDisconnected)
        .def("OnHeartBeatWarning", &CThostFtdcMdSpi::OnHeartBeatWarning)
        .def("OnRspUserLogin", &CThostFtdcMdSpi::OnRspUserLogin)
        .def("OnRspUserLogout", &CThostFtdcMdSpi::OnRspUserLogout)
        .def("OnRspQryMulticastInstrument", &CThostFtdcMdSpi::OnRspQryMulticastInstrument)
        .def("OnRspError", &CThostFtdcMdSpi::OnRspError)
        .def("OnRspSubMarketData", &CThostFtdcMdSpi::OnRspSubMarketData)
        .def("OnRspUnSubMarketData", &CThostFtdcMdSpi::OnRspUnSubMarketData)
        .def("OnRspSubForQuoteRsp", &CThostFtdcMdSpi::OnRspSubForQuoteRsp)
        .def("OnRspUnSubForQuoteRsp", &CThostFtdcMdSpi::OnRspUnSubForQuoteRsp)
        .def("OnRtnDepthMarketData", &CThostFtdcMdSpi::OnRtnDepthMarketData)
        .def("OnRtnForQuoteRsp", &CThostFtdcMdSpi::OnRtnForQuoteRsp)
        ;
}
