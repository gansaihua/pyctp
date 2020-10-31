#include "mduserapi.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


class PyCMduserHandler : public CMduserHandler {
public:
	using CMduserHandler::CMduserHandler;

	void OnFrontConnected() override { PYBIND11_OVERRIDE(void, CMduserHandler, OnFrontConnected, ); }
	void OnFrontDisconnected(int nReason) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnFrontDisconnected, nReason); }
	void OnHeartBeatWarning(int nTimeLapse) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnHeartBeatWarning, nTimeLapse); }
	void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRspUserLogin, pRspUserLogin, pRspInfo, nRequestID, bIsLast); }
	void OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRspUserLogout, pUserLogout, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryMulticastInstrument(CThostFtdcMulticastInstrumentField* pMulticastInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRspQryMulticastInstrument, pMulticastInstrument, pRspInfo, nRequestID, bIsLast); }
	void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRspError, pRspInfo, nRequestID, bIsLast); }
	void OnRspSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRspSubMarketData, pSpecificInstrument, pRspInfo, nRequestID, bIsLast); }
	void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRspUnSubMarketData, pSpecificInstrument, pRspInfo, nRequestID, bIsLast); }
	void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRspSubForQuoteRsp, pSpecificInstrument, pRspInfo, nRequestID, bIsLast); }
	void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRspUnSubForQuoteRsp, pSpecificInstrument, pRspInfo, nRequestID, bIsLast); }
	void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRtnDepthMarketData, pDepthMarketData); }
	void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField* pForQuoteRsp) override { PYBIND11_OVERRIDE(void, CMduserHandler, OnRtnForQuoteRsp, pForQuoteRsp); }
};


void init_mduserapi(py::module_& m) {
	py::class_<CMduserHandler, PyCMduserHandler>(m, "CMduserHandler")
		.def("connect", &CMduserHandler::connect)
		.def_static("GetApiVersion", &CMduserHandler::GetApiVersion)

		.def(py::init<>())
		.def("OnFrontConnected", &CMduserHandler::OnFrontConnected)
		.def("OnFrontDisconnected", &CMduserHandler::OnFrontDisconnected)
		.def("OnHeartBeatWarning", &CMduserHandler::OnHeartBeatWarning)
		.def("OnRspUserLogin", &CMduserHandler::OnRspUserLogin)
		.def("OnRspUserLogout", &CMduserHandler::OnRspUserLogout)
		.def("OnRspQryMulticastInstrument", &CMduserHandler::OnRspQryMulticastInstrument)
		.def("OnRspError", &CMduserHandler::OnRspError)
		.def("OnRspSubMarketData", &CMduserHandler::OnRspSubMarketData)
		.def("OnRspUnSubMarketData", &CMduserHandler::OnRspUnSubMarketData)
		.def("OnRspSubForQuoteRsp", &CMduserHandler::OnRspSubForQuoteRsp)
		.def("OnRspUnSubForQuoteRsp", &CMduserHandler::OnRspUnSubForQuoteRsp)
		.def("OnRtnDepthMarketData", &CMduserHandler::OnRtnDepthMarketData)
		.def("OnRtnForQuoteRsp", &CMduserHandler::OnRtnForQuoteRsp)
		.def("Release", &CMduserHandler::Release)
		.def("Init", &CMduserHandler::Init)
		.def("Join", &CMduserHandler::Join)
		.def("GetTradingDay", &CMduserHandler::GetTradingDay)
		.def("RegisterFront", &CMduserHandler::RegisterFront)
		.def("RegisterNameServer", &CMduserHandler::RegisterNameServer)
		.def("RegisterFensUserInfo", &CMduserHandler::RegisterFensUserInfo)
		.def("RegisterSpi", &CMduserHandler::RegisterSpi)
		.def("ReqUserLogin", &CMduserHandler::ReqUserLogin)
		.def("ReqUserLogout", &CMduserHandler::ReqUserLogout)
		.def("ReqQryMulticastInstrument", &CMduserHandler::ReqQryMulticastInstrument)
		.def("SubscribeMarketData", [](CMduserHandler& self, std::vector<std::string> vs, int nCount) {std::vector<char*> vc; vc.reserve(nCount); for (auto& s : vs) vc.push_back(const_cast<char*>(s.c_str())); return self.SubscribeMarketData(vc.data(), (int)vc.size());})
		.def("UnSubscribeMarketData", [](CMduserHandler& self, std::vector<std::string> vs, int nCount) {std::vector<char*> vc; vc.reserve(nCount); for (auto& s : vs) vc.push_back(const_cast<char*>(s.c_str())); return self.UnSubscribeMarketData(vc.data(), (int)vc.size());})
		.def("SubscribeForQuoteRsp", [](CMduserHandler& self, std::vector<std::string> vs, int nCount) {std::vector<char*> vc; vc.reserve(nCount); for (auto& s : vs) vc.push_back(const_cast<char*>(s.c_str())); return self.SubscribeForQuoteRsp(vc.data(), (int)vc.size());})
		.def("UnSubscribeForQuoteRsp", [](CMduserHandler& self, std::vector<std::string> vs, int nCount) {std::vector<char*> vc; vc.reserve(nCount); for (auto& s : vs) vc.push_back(const_cast<char*>(s.c_str())); return self.UnSubscribeForQuoteRsp(vc.data(), (int)vc.size());})
		;
}
