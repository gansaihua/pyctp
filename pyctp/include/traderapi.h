#pragma once

#include "ctp/ThostFtdcTraderApi.h"


class CTraderHandler : public CThostFtdcTraderSpi {
private:
	CThostFtdcTraderApi* m_api;

public:
	void connect(char* frontAddr, const char* pszFlowPath = "") {
		m_api = CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath);
		m_api->RegisterSpi(this);
		m_api->SubscribePublicTopic(THOST_TERT_QUICK);
		m_api->SubscribePrivateTopic(THOST_TERT_QUICK);
		m_api->RegisterFront(frontAddr);
		m_api->Init();
	}

	// BEGIN CThostFtdcTraderApi interface
	static const char* GetApiVersion() {
		return CThostFtdcTraderApi::GetApiVersion();
	}

	void Release() {
		if (m_api) {
			m_api->RegisterSpi(nullptr);
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

	void RegisterSpi(CThostFtdcTraderSpi* pSpi) {
		m_api->RegisterSpi(pSpi);
	}

	void SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType) {
		m_api->SubscribePrivateTopic(nResumeType);
	}

	void SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType) {
		m_api->SubscribePublicTopic(nResumeType);
	}

	int ReqAuthenticate(CThostFtdcReqAuthenticateField* pReqAuthenticateField, int nRequestID) {
		return m_api->ReqAuthenticate(pReqAuthenticateField, nRequestID);
	}

	int RegisterUserSystemInfo(CThostFtdcUserSystemInfoField* pUserSystemInfo) {
		return m_api->RegisterUserSystemInfo(pUserSystemInfo);
	}

	int SubmitUserSystemInfo(CThostFtdcUserSystemInfoField* pUserSystemInfo) {
		return m_api->SubmitUserSystemInfo(pUserSystemInfo);
	}

	int ReqUserLogin(CThostFtdcReqUserLoginField* pReqUserLoginField, int nRequestID) {
		return m_api->ReqUserLogin(pReqUserLoginField, nRequestID);
	}

	int ReqUserLogout(CThostFtdcUserLogoutField* pUserLogout, int nRequestID) {
		return m_api->ReqUserLogout(pUserLogout, nRequestID);
	}

	int ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, int nRequestID) {
		return m_api->ReqUserPasswordUpdate(pUserPasswordUpdate, nRequestID);
	}

	int ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, int nRequestID) {
		return m_api->ReqTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, nRequestID);
	}

	int ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField* pReqUserAuthMethod, int nRequestID) {
		return m_api->ReqUserAuthMethod(pReqUserAuthMethod, nRequestID);
	}

	int ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField* pReqGenUserCaptcha, int nRequestID) {
		return m_api->ReqGenUserCaptcha(pReqGenUserCaptcha, nRequestID);
	}

	int ReqGenUserText(CThostFtdcReqGenUserTextField* pReqGenUserText, int nRequestID) {
		return m_api->ReqGenUserText(pReqGenUserText, nRequestID);
	}

	int ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField* pReqUserLoginWithCaptcha, int nRequestID) {
		return m_api->ReqUserLoginWithCaptcha(pReqUserLoginWithCaptcha, nRequestID);
	}

	int ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField* pReqUserLoginWithText, int nRequestID) {
		return m_api->ReqUserLoginWithText(pReqUserLoginWithText, nRequestID);
	}

	int ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField* pReqUserLoginWithOTP, int nRequestID) {
		return m_api->ReqUserLoginWithOTP(pReqUserLoginWithOTP, nRequestID);
	}

	int ReqOrderInsert(CThostFtdcInputOrderField* pInputOrder, int nRequestID) {
		return m_api->ReqOrderInsert(pInputOrder, nRequestID);
	}

	int ReqParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, int nRequestID) {
		return m_api->ReqParkedOrderInsert(pParkedOrder, nRequestID);
	}

	int ReqParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, int nRequestID) {
		return m_api->ReqParkedOrderAction(pParkedOrderAction, nRequestID);
	}

	int ReqOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, int nRequestID) {
		return m_api->ReqOrderAction(pInputOrderAction, nRequestID);
	}

	int ReqQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, int nRequestID) {
		return m_api->ReqQueryMaxOrderVolume(pQueryMaxOrderVolume, nRequestID);
	}

	int ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, int nRequestID) {
		return m_api->ReqSettlementInfoConfirm(pSettlementInfoConfirm, nRequestID);
	}

	int ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, int nRequestID) {
		return m_api->ReqRemoveParkedOrder(pRemoveParkedOrder, nRequestID);
	}

	int ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, int nRequestID) {
		return m_api->ReqRemoveParkedOrderAction(pRemoveParkedOrderAction, nRequestID);
	}

	int ReqExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, int nRequestID) {
		return m_api->ReqExecOrderInsert(pInputExecOrder, nRequestID);
	}

	int ReqExecOrderAction(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, int nRequestID) {
		return m_api->ReqExecOrderAction(pInputExecOrderAction, nRequestID);
	}

	int ReqForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, int nRequestID) {
		return m_api->ReqForQuoteInsert(pInputForQuote, nRequestID);
	}

	int ReqQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, int nRequestID) {
		return m_api->ReqQuoteInsert(pInputQuote, nRequestID);
	}

	int ReqQuoteAction(CThostFtdcInputQuoteActionField* pInputQuoteAction, int nRequestID) {
		return m_api->ReqQuoteAction(pInputQuoteAction, nRequestID);
	}

	int ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, int nRequestID) {
		return m_api->ReqBatchOrderAction(pInputBatchOrderAction, nRequestID);
	}

	int ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, int nRequestID) {
		return m_api->ReqOptionSelfCloseInsert(pInputOptionSelfClose, nRequestID);
	}

	int ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, int nRequestID) {
		return m_api->ReqOptionSelfCloseAction(pInputOptionSelfCloseAction, nRequestID);
	}

	int ReqCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, int nRequestID) {
		return m_api->ReqCombActionInsert(pInputCombAction, nRequestID);
	}

	int ReqQryOrder(CThostFtdcQryOrderField* pQryOrder, int nRequestID) {
		return m_api->ReqQryOrder(pQryOrder, nRequestID);
	}

	int ReqQryTrade(CThostFtdcQryTradeField* pQryTrade, int nRequestID) {
		return m_api->ReqQryTrade(pQryTrade, nRequestID);
	}

	int ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField* pQryInvestorPosition, int nRequestID) {
		return m_api->ReqQryInvestorPosition(pQryInvestorPosition, nRequestID);
	}

	int ReqQryTradingAccount(CThostFtdcQryTradingAccountField* pQryTradingAccount, int nRequestID) {
		return m_api->ReqQryTradingAccount(pQryTradingAccount, nRequestID);
	}

	int ReqQryInvestor(CThostFtdcQryInvestorField* pQryInvestor, int nRequestID) {
		return m_api->ReqQryInvestor(pQryInvestor, nRequestID);
	}

	int ReqQryTradingCode(CThostFtdcQryTradingCodeField* pQryTradingCode, int nRequestID) {
		return m_api->ReqQryTradingCode(pQryTradingCode, nRequestID);
	}

	int ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField* pQryInstrumentMarginRate, int nRequestID) {
		return m_api->ReqQryInstrumentMarginRate(pQryInstrumentMarginRate, nRequestID);
	}

	int ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField* pQryInstrumentCommissionRate, int nRequestID) {
		return m_api->ReqQryInstrumentCommissionRate(pQryInstrumentCommissionRate, nRequestID);
	}

	int ReqQryExchange(CThostFtdcQryExchangeField* pQryExchange, int nRequestID) {
		return m_api->ReqQryExchange(pQryExchange, nRequestID);
	}

	int ReqQryProduct(CThostFtdcQryProductField* pQryProduct, int nRequestID) {
		return m_api->ReqQryProduct(pQryProduct, nRequestID);
	}

	int ReqQryInstrument(CThostFtdcQryInstrumentField* pQryInstrument, int nRequestID) {
		return m_api->ReqQryInstrument(pQryInstrument, nRequestID);
	}

	int ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField* pQryDepthMarketData, int nRequestID) {
		return m_api->ReqQryDepthMarketData(pQryDepthMarketData, nRequestID);
	}

	int ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField* pQrySettlementInfo, int nRequestID) {
		return m_api->ReqQrySettlementInfo(pQrySettlementInfo, nRequestID);
	}

	int ReqQryTransferBank(CThostFtdcQryTransferBankField* pQryTransferBank, int nRequestID) {
		return m_api->ReqQryTransferBank(pQryTransferBank, nRequestID);
	}

	int ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField* pQryInvestorPositionDetail, int nRequestID) {
		return m_api->ReqQryInvestorPositionDetail(pQryInvestorPositionDetail, nRequestID);
	}

	int ReqQryNotice(CThostFtdcQryNoticeField* pQryNotice, int nRequestID) {
		return m_api->ReqQryNotice(pQryNotice, nRequestID);
	}

	int ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField* pQrySettlementInfoConfirm, int nRequestID) {
		return m_api->ReqQrySettlementInfoConfirm(pQrySettlementInfoConfirm, nRequestID);
	}

	int ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField* pQryInvestorPositionCombineDetail, int nRequestID) {
		return m_api->ReqQryInvestorPositionCombineDetail(pQryInvestorPositionCombineDetail, nRequestID);
	}

	int ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField* pQryCFMMCTradingAccountKey, int nRequestID) {
		return m_api->ReqQryCFMMCTradingAccountKey(pQryCFMMCTradingAccountKey, nRequestID);
	}

	int ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField* pQryEWarrantOffset, int nRequestID) {
		return m_api->ReqQryEWarrantOffset(pQryEWarrantOffset, nRequestID);
	}

	int ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField* pQryInvestorProductGroupMargin, int nRequestID) {
		return m_api->ReqQryInvestorProductGroupMargin(pQryInvestorProductGroupMargin, nRequestID);
	}

	int ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField* pQryExchangeMarginRate, int nRequestID) {
		return m_api->ReqQryExchangeMarginRate(pQryExchangeMarginRate, nRequestID);
	}

	int ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField* pQryExchangeMarginRateAdjust, int nRequestID) {
		return m_api->ReqQryExchangeMarginRateAdjust(pQryExchangeMarginRateAdjust, nRequestID);
	}

	int ReqQryExchangeRate(CThostFtdcQryExchangeRateField* pQryExchangeRate, int nRequestID) {
		return m_api->ReqQryExchangeRate(pQryExchangeRate, nRequestID);
	}

	int ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField* pQrySecAgentACIDMap, int nRequestID) {
		return m_api->ReqQrySecAgentACIDMap(pQrySecAgentACIDMap, nRequestID);
	}

	int ReqQryProductExchRate(CThostFtdcQryProductExchRateField* pQryProductExchRate, int nRequestID) {
		return m_api->ReqQryProductExchRate(pQryProductExchRate, nRequestID);
	}

	int ReqQryProductGroup(CThostFtdcQryProductGroupField* pQryProductGroup, int nRequestID) {
		return m_api->ReqQryProductGroup(pQryProductGroup, nRequestID);
	}

	int ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField* pQryMMInstrumentCommissionRate, int nRequestID) {
		return m_api->ReqQryMMInstrumentCommissionRate(pQryMMInstrumentCommissionRate, nRequestID);
	}

	int ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField* pQryMMOptionInstrCommRate, int nRequestID) {
		return m_api->ReqQryMMOptionInstrCommRate(pQryMMOptionInstrCommRate, nRequestID);
	}

	int ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField* pQryInstrumentOrderCommRate, int nRequestID) {
		return m_api->ReqQryInstrumentOrderCommRate(pQryInstrumentOrderCommRate, nRequestID);
	}

	int ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField* pQryTradingAccount, int nRequestID) {
		return m_api->ReqQrySecAgentTradingAccount(pQryTradingAccount, nRequestID);
	}

	int ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField* pQrySecAgentCheckMode, int nRequestID) {
		return m_api->ReqQrySecAgentCheckMode(pQrySecAgentCheckMode, nRequestID);
	}

	int ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField* pQrySecAgentTradeInfo, int nRequestID) {
		return m_api->ReqQrySecAgentTradeInfo(pQrySecAgentTradeInfo, nRequestID);
	}

	int ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField* pQryOptionInstrTradeCost, int nRequestID) {
		return m_api->ReqQryOptionInstrTradeCost(pQryOptionInstrTradeCost, nRequestID);
	}

	int ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField* pQryOptionInstrCommRate, int nRequestID) {
		return m_api->ReqQryOptionInstrCommRate(pQryOptionInstrCommRate, nRequestID);
	}

	int ReqQryExecOrder(CThostFtdcQryExecOrderField* pQryExecOrder, int nRequestID) {
		return m_api->ReqQryExecOrder(pQryExecOrder, nRequestID);
	}

	int ReqQryForQuote(CThostFtdcQryForQuoteField* pQryForQuote, int nRequestID) {
		return m_api->ReqQryForQuote(pQryForQuote, nRequestID);
	}

	int ReqQryQuote(CThostFtdcQryQuoteField* pQryQuote, int nRequestID) {
		return m_api->ReqQryQuote(pQryQuote, nRequestID);
	}

	int ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField* pQryOptionSelfClose, int nRequestID) {
		return m_api->ReqQryOptionSelfClose(pQryOptionSelfClose, nRequestID);
	}

	int ReqQryInvestUnit(CThostFtdcQryInvestUnitField* pQryInvestUnit, int nRequestID) {
		return m_api->ReqQryInvestUnit(pQryInvestUnit, nRequestID);
	}

	int ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField* pQryCombInstrumentGuard, int nRequestID) {
		return m_api->ReqQryCombInstrumentGuard(pQryCombInstrumentGuard, nRequestID);
	}

	int ReqQryCombAction(CThostFtdcQryCombActionField* pQryCombAction, int nRequestID) {
		return m_api->ReqQryCombAction(pQryCombAction, nRequestID);
	}

	int ReqQryTransferSerial(CThostFtdcQryTransferSerialField* pQryTransferSerial, int nRequestID) {
		return m_api->ReqQryTransferSerial(pQryTransferSerial, nRequestID);
	}

	int ReqQryAccountregister(CThostFtdcQryAccountregisterField* pQryAccountregister, int nRequestID) {
		return m_api->ReqQryAccountregister(pQryAccountregister, nRequestID);
	}

	int ReqQryContractBank(CThostFtdcQryContractBankField* pQryContractBank, int nRequestID) {
		return m_api->ReqQryContractBank(pQryContractBank, nRequestID);
	}

	int ReqQryParkedOrder(CThostFtdcQryParkedOrderField* pQryParkedOrder, int nRequestID) {
		return m_api->ReqQryParkedOrder(pQryParkedOrder, nRequestID);
	}

	int ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField* pQryParkedOrderAction, int nRequestID) {
		return m_api->ReqQryParkedOrderAction(pQryParkedOrderAction, nRequestID);
	}

	int ReqQryTradingNotice(CThostFtdcQryTradingNoticeField* pQryTradingNotice, int nRequestID) {
		return m_api->ReqQryTradingNotice(pQryTradingNotice, nRequestID);
	}

	int ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField* pQryBrokerTradingParams, int nRequestID) {
		return m_api->ReqQryBrokerTradingParams(pQryBrokerTradingParams, nRequestID);
	}

	int ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField* pQryBrokerTradingAlgos, int nRequestID) {
		return m_api->ReqQryBrokerTradingAlgos(pQryBrokerTradingAlgos, nRequestID);
	}

	int ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, int nRequestID) {
		return m_api->ReqQueryCFMMCTradingAccountToken(pQueryCFMMCTradingAccountToken, nRequestID);
	}

	int ReqFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, int nRequestID) {
		return m_api->ReqFromBankToFutureByFuture(pReqTransfer, nRequestID);
	}

	int ReqFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, int nRequestID) {
		return m_api->ReqFromFutureToBankByFuture(pReqTransfer, nRequestID);
	}

	int ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, int nRequestID) {
		return m_api->ReqQueryBankAccountMoneyByFuture(pReqQueryAccount, nRequestID);
	}
	// END CThostFtdcTraderApi interface
	
};
