#pragma once

#include "ctp/ThostFtdcMdApi.h"


class CMduserHandler : public CThostFtdcMdSpi {

private:
	CThostFtdcMdApi* m_api;

public:
	void connect(char* frontAddr, const char* pszFlowPath = "", const bool bIsUsingUdp = false, const bool bIsMulticast = false) {
		m_api = CThostFtdcMdApi::CreateFtdcMdApi(pszFlowPath, bIsUsingUdp, bIsMulticast);
		m_api->RegisterSpi(this);
		m_api->RegisterFront(frontAddr);
		m_api->Init();
	}

	// BEGIN CThostFtdcMdApi interface
	static const char* GetApiVersion() {
		return CThostFtdcMdApi::GetApiVersion();
	}

	void Release() {
		if (m_api) {
			m_api->Release();
			m_api = nullptr;
		}
	}

	void Init() {
		m_api->Init();
	}

	int Join() {
		return m_api->Join();
	}

	const char* GetTradingDay() {
		return m_api->GetTradingDay();
	}

	void RegisterFront(char* pszFrontAddress) {
		m_api->RegisterFront(pszFrontAddress);
	}

	void RegisterNameServer(char* pszNsAddress) {
		m_api->RegisterNameServer(pszNsAddress);
	}

	void RegisterFensUserInfo(CThostFtdcFensUserInfoField* pFensUserInfo) {
		m_api->RegisterFensUserInfo(pFensUserInfo);
	}

	void RegisterSpi(CThostFtdcMdSpi* pSpi) {
		m_api->RegisterSpi(pSpi);
	}

	int SubscribeMarketData(char* ppInstrumentID[], int nCount) {
		return m_api->SubscribeMarketData(ppInstrumentID, nCount);
	}

	int UnSubscribeMarketData(char* ppInstrumentID[], int nCount) {
		return m_api->UnSubscribeMarketData(ppInstrumentID, nCount);
	}

	int SubscribeForQuoteRsp(char* ppInstrumentID[], int nCount) {
		return m_api->SubscribeForQuoteRsp(ppInstrumentID, nCount);
	}

	int UnSubscribeForQuoteRsp(char* ppInstrumentID[], int nCount) {
		return m_api->UnSubscribeForQuoteRsp(ppInstrumentID, nCount);
	}

	int ReqUserLogin(CThostFtdcReqUserLoginField* pReqUserLoginField, int nRequestID) {
		return m_api->ReqUserLogin(pReqUserLoginField, nRequestID);
	}

	int ReqUserLogout(CThostFtdcUserLogoutField* pUserLogout, int nRequestID) {
		return m_api->ReqUserLogout(pUserLogout, nRequestID);
	}

	int ReqQryMulticastInstrument(CThostFtdcQryMulticastInstrumentField* pQryMulticastInstrument, int nRequestID) {
		return m_api->ReqQryMulticastInstrument(pQryMulticastInstrument, nRequestID);
	}
	// END CThostFtdcMdApi interface

};
