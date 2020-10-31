#include "traderapi.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;


class PyCTraderHandler : public CTraderHandler {
public:
	using CTraderHandler::CTraderHandler;

	void OnFrontConnected() override { PYBIND11_OVERRIDE(void, CTraderHandler, OnFrontConnected, ); }
	void OnFrontDisconnected(int nReason) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnFrontDisconnected, nReason); }
	void OnHeartBeatWarning(int nTimeLapse) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnHeartBeatWarning, nTimeLapse); }
	void OnRspAuthenticate(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspAuthenticate, pRspAuthenticateField, pRspInfo, nRequestID, bIsLast); }
	void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspUserLogin, pRspUserLogin, pRspInfo, nRequestID, bIsLast); }
	void OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspUserLogout, pUserLogout, pRspInfo, nRequestID, bIsLast); }
	void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspUserPasswordUpdate, pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast); }
	void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspTradingAccountPasswordUpdate, pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast); }
	void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField* pRspUserAuthMethod, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspUserAuthMethod, pRspUserAuthMethod, pRspInfo, nRequestID, bIsLast); }
	void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField* pRspGenUserCaptcha, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspGenUserCaptcha, pRspGenUserCaptcha, pRspInfo, nRequestID, bIsLast); }
	void OnRspGenUserText(CThostFtdcRspGenUserTextField* pRspGenUserText, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspGenUserText, pRspGenUserText, pRspInfo, nRequestID, bIsLast); }
	void OnRspOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspOrderInsert, pInputOrder, pRspInfo, nRequestID, bIsLast); }
	void OnRspParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspParkedOrderInsert, pParkedOrder, pRspInfo, nRequestID, bIsLast); }
	void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspParkedOrderAction, pParkedOrderAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspOrderAction, pInputOrderAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQueryMaxOrderVolume, pQueryMaxOrderVolume, pRspInfo, nRequestID, bIsLast); }
	void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspSettlementInfoConfirm, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast); }
	void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspRemoveParkedOrder, pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast); }
	void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspRemoveParkedOrderAction, pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspExecOrderInsert, pInputExecOrder, pRspInfo, nRequestID, bIsLast); }
	void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspExecOrderAction, pInputExecOrderAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspForQuoteInsert, pInputForQuote, pRspInfo, nRequestID, bIsLast); }
	void OnRspQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQuoteInsert, pInputQuote, pRspInfo, nRequestID, bIsLast); }
	void OnRspQuoteAction(CThostFtdcInputQuoteActionField* pInputQuoteAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQuoteAction, pInputQuoteAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspBatchOrderAction, pInputBatchOrderAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspOptionSelfCloseInsert, pInputOptionSelfClose, pRspInfo, nRequestID, bIsLast); }
	void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspOptionSelfCloseAction, pInputOptionSelfCloseAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspCombActionInsert, pInputCombAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryOrder(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryOrder, pOrder, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryTrade(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryTrade, pTrade, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInvestorPosition, pInvestorPosition, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryTradingAccount, pTradingAccount, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInvestor(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInvestor, pInvestor, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryTradingCode(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryTradingCode, pTradingCode, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInstrumentMarginRate, pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInstrumentCommissionRate, pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryExchange(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryExchange, pExchange, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryProduct(CThostFtdcProductField* pProduct, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryProduct, pProduct, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInstrument(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInstrument, pInstrument, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryDepthMarketData, pDepthMarketData, pRspInfo, nRequestID, bIsLast); }
	void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQrySettlementInfo, pSettlementInfo, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryTransferBank(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryTransferBank, pTransferBank, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInvestorPositionDetail, pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryNotice(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryNotice, pNotice, pRspInfo, nRequestID, bIsLast); }
	void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQrySettlementInfoConfirm, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInvestorPositionCombineDetail, pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryCFMMCTradingAccountKey, pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryEWarrantOffset, pEWarrantOffset, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField* pInvestorProductGroupMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInvestorProductGroupMargin, pInvestorProductGroupMargin, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField* pExchangeMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryExchangeMarginRate, pExchangeMarginRate, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField* pExchangeMarginRateAdjust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryExchangeMarginRateAdjust, pExchangeMarginRateAdjust, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryExchangeRate(CThostFtdcExchangeRateField* pExchangeRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryExchangeRate, pExchangeRate, pRspInfo, nRequestID, bIsLast); }
	void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField* pSecAgentACIDMap, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQrySecAgentACIDMap, pSecAgentACIDMap, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryProductExchRate(CThostFtdcProductExchRateField* pProductExchRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryProductExchRate, pProductExchRate, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryProductGroup(CThostFtdcProductGroupField* pProductGroup, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryProductGroup, pProductGroup, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField* pMMInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryMMInstrumentCommissionRate, pMMInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField* pMMOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryMMOptionInstrCommRate, pMMOptionInstrCommRate, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField* pInstrumentOrderCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInstrumentOrderCommRate, pInstrumentOrderCommRate, pRspInfo, nRequestID, bIsLast); }
	void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQrySecAgentTradingAccount, pTradingAccount, pRspInfo, nRequestID, bIsLast); }
	void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField* pSecAgentCheckMode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQrySecAgentCheckMode, pSecAgentCheckMode, pRspInfo, nRequestID, bIsLast); }
	void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField* pSecAgentTradeInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQrySecAgentTradeInfo, pSecAgentTradeInfo, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField* pOptionInstrTradeCost, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryOptionInstrTradeCost, pOptionInstrTradeCost, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField* pOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryOptionInstrCommRate, pOptionInstrCommRate, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryExecOrder(CThostFtdcExecOrderField* pExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryExecOrder, pExecOrder, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryForQuote(CThostFtdcForQuoteField* pForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryForQuote, pForQuote, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryQuote(CThostFtdcQuoteField* pQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryQuote, pQuote, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryOptionSelfClose, pOptionSelfClose, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryInvestUnit(CThostFtdcInvestUnitField* pInvestUnit, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryInvestUnit, pInvestUnit, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField* pCombInstrumentGuard, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryCombInstrumentGuard, pCombInstrumentGuard, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryCombAction(CThostFtdcCombActionField* pCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryCombAction, pCombAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryTransferSerial(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryTransferSerial, pTransferSerial, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryAccountregister(CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryAccountregister, pAccountregister, pRspInfo, nRequestID, bIsLast); }
	void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspError, pRspInfo, nRequestID, bIsLast); }
	void OnRtnOrder(CThostFtdcOrderField* pOrder) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnOrder, pOrder); }
	void OnRtnTrade(CThostFtdcTradeField* pTrade) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnTrade, pTrade); }
	void OnErrRtnOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnOrderInsert, pInputOrder, pRspInfo); }
	void OnErrRtnOrderAction(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnOrderAction, pOrderAction, pRspInfo); }
	void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField* pInstrumentStatus) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnInstrumentStatus, pInstrumentStatus); }
	void OnRtnBulletin(CThostFtdcBulletinField* pBulletin) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnBulletin, pBulletin); }
	void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnTradingNotice, pTradingNoticeInfo); }
	void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnErrorConditionalOrder, pErrorConditionalOrder); }
	void OnRtnExecOrder(CThostFtdcExecOrderField* pExecOrder) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnExecOrder, pExecOrder); }
	void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnExecOrderInsert, pInputExecOrder, pRspInfo); }
	void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField* pExecOrderAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnExecOrderAction, pExecOrderAction, pRspInfo); }
	void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnForQuoteInsert, pInputForQuote, pRspInfo); }
	void OnRtnQuote(CThostFtdcQuoteField* pQuote) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnQuote, pQuote); }
	void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnQuoteInsert, pInputQuote, pRspInfo); }
	void OnErrRtnQuoteAction(CThostFtdcQuoteActionField* pQuoteAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnQuoteAction, pQuoteAction, pRspInfo); }
	void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField* pForQuoteRsp) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnForQuoteRsp, pForQuoteRsp); }
	void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnCFMMCTradingAccountToken, pCFMMCTradingAccountToken); }
	void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField* pBatchOrderAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnBatchOrderAction, pBatchOrderAction, pRspInfo); }
	void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnOptionSelfClose, pOptionSelfClose); }
	void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnOptionSelfCloseInsert, pInputOptionSelfClose, pRspInfo); }
	void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField* pOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnOptionSelfCloseAction, pOptionSelfCloseAction, pRspInfo); }
	void OnRtnCombAction(CThostFtdcCombActionField* pCombAction) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnCombAction, pCombAction); }
	void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnCombActionInsert, pInputCombAction, pRspInfo); }
	void OnRspQryContractBank(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryContractBank, pContractBank, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryParkedOrder(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryParkedOrder, pParkedOrder, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryParkedOrderAction, pParkedOrderAction, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryTradingNotice(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryTradingNotice, pTradingNotice, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryBrokerTradingParams, pBrokerTradingParams, pRspInfo, nRequestID, bIsLast); }
	void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQryBrokerTradingAlgos, pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast); }
	void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQueryCFMMCTradingAccountToken, pQueryCFMMCTradingAccountToken, pRspInfo, nRequestID, bIsLast); }
	void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField* pRspTransfer) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnFromBankToFutureByBank, pRspTransfer); }
	void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField* pRspTransfer) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnFromFutureToBankByBank, pRspTransfer); }
	void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnRepealFromBankToFutureByBank, pRspRepeal); }
	void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnRepealFromFutureToBankByBank, pRspRepeal); }
	void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField* pRspTransfer) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnFromBankToFutureByFuture, pRspTransfer); }
	void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField* pRspTransfer) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnFromFutureToBankByFuture, pRspTransfer); }
	void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnRepealFromBankToFutureByFutureManual, pRspRepeal); }
	void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnRepealFromFutureToBankByFutureManual, pRspRepeal); }
	void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnQueryBankBalanceByFuture, pNotifyQueryAccount); }
	void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnBankToFutureByFuture, pReqTransfer, pRspInfo); }
	void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnFutureToBankByFuture, pReqTransfer, pRspInfo); }
	void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnRepealBankToFutureByFutureManual, pReqRepeal, pRspInfo); }
	void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnRepealFutureToBankByFutureManual, pReqRepeal, pRspInfo); }
	void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnErrRtnQueryBankBalanceByFuture, pReqQueryAccount, pRspInfo); }
	void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnRepealFromBankToFutureByFuture, pRspRepeal); }
	void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnRepealFromFutureToBankByFuture, pRspRepeal); }
	void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspFromBankToFutureByFuture, pReqTransfer, pRspInfo, nRequestID, bIsLast); }
	void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspFromFutureToBankByFuture, pReqTransfer, pRspInfo, nRequestID, bIsLast); }
	void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRspQueryBankAccountMoneyByFuture, pReqQueryAccount, pRspInfo, nRequestID, bIsLast); }
	void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField* pOpenAccount) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnOpenAccountByBank, pOpenAccount); }
	void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField* pCancelAccount) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnCancelAccountByBank, pCancelAccount); }
	void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField* pChangeAccount) override { PYBIND11_OVERRIDE(void, CTraderHandler, OnRtnChangeAccountByBank, pChangeAccount); }

};


void init_traderapi(py::module_& m) {
	py::class_<CTraderHandler, PyCTraderHandler>(m, "CTraderHandler")
		.def("connect", &CTraderHandler::connect)
		.def_static("GetApiVersion", &CTraderHandler::GetApiVersion)

		.def(py::init<>())
		.def("OnFrontConnected", &CTraderHandler::OnFrontConnected)
		.def("OnFrontDisconnected", &CTraderHandler::OnFrontDisconnected)
		.def("OnHeartBeatWarning", &CTraderHandler::OnHeartBeatWarning)
		.def("OnRspAuthenticate", &CTraderHandler::OnRspAuthenticate)
		.def("OnRspUserLogin", &CTraderHandler::OnRspUserLogin)
		.def("OnRspUserLogout", &CTraderHandler::OnRspUserLogout)
		.def("OnRspUserPasswordUpdate", &CTraderHandler::OnRspUserPasswordUpdate)
		.def("OnRspTradingAccountPasswordUpdate", &CTraderHandler::OnRspTradingAccountPasswordUpdate)
		.def("OnRspUserAuthMethod", &CTraderHandler::OnRspUserAuthMethod)
		.def("OnRspGenUserCaptcha", &CTraderHandler::OnRspGenUserCaptcha)
		.def("OnRspGenUserText", &CTraderHandler::OnRspGenUserText)
		.def("OnRspOrderInsert", &CTraderHandler::OnRspOrderInsert)
		.def("OnRspParkedOrderInsert", &CTraderHandler::OnRspParkedOrderInsert)
		.def("OnRspParkedOrderAction", &CTraderHandler::OnRspParkedOrderAction)
		.def("OnRspOrderAction", &CTraderHandler::OnRspOrderAction)
		.def("OnRspQueryMaxOrderVolume", &CTraderHandler::OnRspQueryMaxOrderVolume)
		.def("OnRspSettlementInfoConfirm", &CTraderHandler::OnRspSettlementInfoConfirm)
		.def("OnRspRemoveParkedOrder", &CTraderHandler::OnRspRemoveParkedOrder)
		.def("OnRspRemoveParkedOrderAction", &CTraderHandler::OnRspRemoveParkedOrderAction)
		.def("OnRspExecOrderInsert", &CTraderHandler::OnRspExecOrderInsert)
		.def("OnRspExecOrderAction", &CTraderHandler::OnRspExecOrderAction)
		.def("OnRspForQuoteInsert", &CTraderHandler::OnRspForQuoteInsert)
		.def("OnRspQuoteInsert", &CTraderHandler::OnRspQuoteInsert)
		.def("OnRspQuoteAction", &CTraderHandler::OnRspQuoteAction)
		.def("OnRspBatchOrderAction", &CTraderHandler::OnRspBatchOrderAction)
		.def("OnRspOptionSelfCloseInsert", &CTraderHandler::OnRspOptionSelfCloseInsert)
		.def("OnRspOptionSelfCloseAction", &CTraderHandler::OnRspOptionSelfCloseAction)
		.def("OnRspCombActionInsert", &CTraderHandler::OnRspCombActionInsert)
		.def("OnRspQryOrder", &CTraderHandler::OnRspQryOrder)
		.def("OnRspQryTrade", &CTraderHandler::OnRspQryTrade)
		.def("OnRspQryInvestorPosition", &CTraderHandler::OnRspQryInvestorPosition)
		.def("OnRspQryTradingAccount", &CTraderHandler::OnRspQryTradingAccount)
		.def("OnRspQryInvestor", &CTraderHandler::OnRspQryInvestor)
		.def("OnRspQryTradingCode", &CTraderHandler::OnRspQryTradingCode)
		.def("OnRspQryInstrumentMarginRate", &CTraderHandler::OnRspQryInstrumentMarginRate)
		.def("OnRspQryInstrumentCommissionRate", &CTraderHandler::OnRspQryInstrumentCommissionRate)
		.def("OnRspQryExchange", &CTraderHandler::OnRspQryExchange)
		.def("OnRspQryProduct", &CTraderHandler::OnRspQryProduct)
		.def("OnRspQryInstrument", &CTraderHandler::OnRspQryInstrument)
		.def("OnRspQryDepthMarketData", &CTraderHandler::OnRspQryDepthMarketData)
		.def("OnRspQrySettlementInfo", &CTraderHandler::OnRspQrySettlementInfo)
		.def("OnRspQryTransferBank", &CTraderHandler::OnRspQryTransferBank)
		.def("OnRspQryInvestorPositionDetail", &CTraderHandler::OnRspQryInvestorPositionDetail)
		.def("OnRspQryNotice", &CTraderHandler::OnRspQryNotice)
		.def("OnRspQrySettlementInfoConfirm", &CTraderHandler::OnRspQrySettlementInfoConfirm)
		.def("OnRspQryInvestorPositionCombineDetail", &CTraderHandler::OnRspQryInvestorPositionCombineDetail)
		.def("OnRspQryCFMMCTradingAccountKey", &CTraderHandler::OnRspQryCFMMCTradingAccountKey)
		.def("OnRspQryEWarrantOffset", &CTraderHandler::OnRspQryEWarrantOffset)
		.def("OnRspQryInvestorProductGroupMargin", &CTraderHandler::OnRspQryInvestorProductGroupMargin)
		.def("OnRspQryExchangeMarginRate", &CTraderHandler::OnRspQryExchangeMarginRate)
		.def("OnRspQryExchangeMarginRateAdjust", &CTraderHandler::OnRspQryExchangeMarginRateAdjust)
		.def("OnRspQryExchangeRate", &CTraderHandler::OnRspQryExchangeRate)
		.def("OnRspQrySecAgentACIDMap", &CTraderHandler::OnRspQrySecAgentACIDMap)
		.def("OnRspQryProductExchRate", &CTraderHandler::OnRspQryProductExchRate)
		.def("OnRspQryProductGroup", &CTraderHandler::OnRspQryProductGroup)
		.def("OnRspQryMMInstrumentCommissionRate", &CTraderHandler::OnRspQryMMInstrumentCommissionRate)
		.def("OnRspQryMMOptionInstrCommRate", &CTraderHandler::OnRspQryMMOptionInstrCommRate)
		.def("OnRspQryInstrumentOrderCommRate", &CTraderHandler::OnRspQryInstrumentOrderCommRate)
		.def("OnRspQrySecAgentTradingAccount", &CTraderHandler::OnRspQrySecAgentTradingAccount)
		.def("OnRspQrySecAgentCheckMode", &CTraderHandler::OnRspQrySecAgentCheckMode)
		.def("OnRspQrySecAgentTradeInfo", &CTraderHandler::OnRspQrySecAgentTradeInfo)
		.def("OnRspQryOptionInstrTradeCost", &CTraderHandler::OnRspQryOptionInstrTradeCost)
		.def("OnRspQryOptionInstrCommRate", &CTraderHandler::OnRspQryOptionInstrCommRate)
		.def("OnRspQryExecOrder", &CTraderHandler::OnRspQryExecOrder)
		.def("OnRspQryForQuote", &CTraderHandler::OnRspQryForQuote)
		.def("OnRspQryQuote", &CTraderHandler::OnRspQryQuote)
		.def("OnRspQryOptionSelfClose", &CTraderHandler::OnRspQryOptionSelfClose)
		.def("OnRspQryInvestUnit", &CTraderHandler::OnRspQryInvestUnit)
		.def("OnRspQryCombInstrumentGuard", &CTraderHandler::OnRspQryCombInstrumentGuard)
		.def("OnRspQryCombAction", &CTraderHandler::OnRspQryCombAction)
		.def("OnRspQryTransferSerial", &CTraderHandler::OnRspQryTransferSerial)
		.def("OnRspQryAccountregister", &CTraderHandler::OnRspQryAccountregister)
		.def("OnRspError", &CTraderHandler::OnRspError)
		.def("OnRtnOrder", &CTraderHandler::OnRtnOrder)
		.def("OnRtnTrade", &CTraderHandler::OnRtnTrade)
		.def("OnErrRtnOrderInsert", &CTraderHandler::OnErrRtnOrderInsert)
		.def("OnErrRtnOrderAction", &CTraderHandler::OnErrRtnOrderAction)
		.def("OnRtnInstrumentStatus", &CTraderHandler::OnRtnInstrumentStatus)
		.def("OnRtnBulletin", &CTraderHandler::OnRtnBulletin)
		.def("OnRtnTradingNotice", &CTraderHandler::OnRtnTradingNotice)
		.def("OnRtnErrorConditionalOrder", &CTraderHandler::OnRtnErrorConditionalOrder)
		.def("OnRtnExecOrder", &CTraderHandler::OnRtnExecOrder)
		.def("OnErrRtnExecOrderInsert", &CTraderHandler::OnErrRtnExecOrderInsert)
		.def("OnErrRtnExecOrderAction", &CTraderHandler::OnErrRtnExecOrderAction)
		.def("OnErrRtnForQuoteInsert", &CTraderHandler::OnErrRtnForQuoteInsert)
		.def("OnRtnQuote", &CTraderHandler::OnRtnQuote)
		.def("OnErrRtnQuoteInsert", &CTraderHandler::OnErrRtnQuoteInsert)
		.def("OnErrRtnQuoteAction", &CTraderHandler::OnErrRtnQuoteAction)
		.def("OnRtnForQuoteRsp", &CTraderHandler::OnRtnForQuoteRsp)
		.def("OnRtnCFMMCTradingAccountToken", &CTraderHandler::OnRtnCFMMCTradingAccountToken)
		.def("OnErrRtnBatchOrderAction", &CTraderHandler::OnErrRtnBatchOrderAction)
		.def("OnRtnOptionSelfClose", &CTraderHandler::OnRtnOptionSelfClose)
		.def("OnErrRtnOptionSelfCloseInsert", &CTraderHandler::OnErrRtnOptionSelfCloseInsert)
		.def("OnErrRtnOptionSelfCloseAction", &CTraderHandler::OnErrRtnOptionSelfCloseAction)
		.def("OnRtnCombAction", &CTraderHandler::OnRtnCombAction)
		.def("OnErrRtnCombActionInsert", &CTraderHandler::OnErrRtnCombActionInsert)
		.def("OnRspQryContractBank", &CTraderHandler::OnRspQryContractBank)
		.def("OnRspQryParkedOrder", &CTraderHandler::OnRspQryParkedOrder)
		.def("OnRspQryParkedOrderAction", &CTraderHandler::OnRspQryParkedOrderAction)
		.def("OnRspQryTradingNotice", &CTraderHandler::OnRspQryTradingNotice)
		.def("OnRspQryBrokerTradingParams", &CTraderHandler::OnRspQryBrokerTradingParams)
		.def("OnRspQryBrokerTradingAlgos", &CTraderHandler::OnRspQryBrokerTradingAlgos)
		.def("OnRspQueryCFMMCTradingAccountToken", &CTraderHandler::OnRspQueryCFMMCTradingAccountToken)
		.def("OnRtnFromBankToFutureByBank", &CTraderHandler::OnRtnFromBankToFutureByBank)
		.def("OnRtnFromFutureToBankByBank", &CTraderHandler::OnRtnFromFutureToBankByBank)
		.def("OnRtnRepealFromBankToFutureByBank", &CTraderHandler::OnRtnRepealFromBankToFutureByBank)
		.def("OnRtnRepealFromFutureToBankByBank", &CTraderHandler::OnRtnRepealFromFutureToBankByBank)
		.def("OnRtnFromBankToFutureByFuture", &CTraderHandler::OnRtnFromBankToFutureByFuture)
		.def("OnRtnFromFutureToBankByFuture", &CTraderHandler::OnRtnFromFutureToBankByFuture)
		.def("OnRtnRepealFromBankToFutureByFutureManual", &CTraderHandler::OnRtnRepealFromBankToFutureByFutureManual)
		.def("OnRtnRepealFromFutureToBankByFutureManual", &CTraderHandler::OnRtnRepealFromFutureToBankByFutureManual)
		.def("OnRtnQueryBankBalanceByFuture", &CTraderHandler::OnRtnQueryBankBalanceByFuture)
		.def("OnErrRtnBankToFutureByFuture", &CTraderHandler::OnErrRtnBankToFutureByFuture)
		.def("OnErrRtnFutureToBankByFuture", &CTraderHandler::OnErrRtnFutureToBankByFuture)
		.def("OnErrRtnRepealBankToFutureByFutureManual", &CTraderHandler::OnErrRtnRepealBankToFutureByFutureManual)
		.def("OnErrRtnRepealFutureToBankByFutureManual", &CTraderHandler::OnErrRtnRepealFutureToBankByFutureManual)
		.def("OnErrRtnQueryBankBalanceByFuture", &CTraderHandler::OnErrRtnQueryBankBalanceByFuture)
		.def("OnRtnRepealFromBankToFutureByFuture", &CTraderHandler::OnRtnRepealFromBankToFutureByFuture)
		.def("OnRtnRepealFromFutureToBankByFuture", &CTraderHandler::OnRtnRepealFromFutureToBankByFuture)
		.def("OnRspFromBankToFutureByFuture", &CTraderHandler::OnRspFromBankToFutureByFuture)
		.def("OnRspFromFutureToBankByFuture", &CTraderHandler::OnRspFromFutureToBankByFuture)
		.def("OnRspQueryBankAccountMoneyByFuture", &CTraderHandler::OnRspQueryBankAccountMoneyByFuture)
		.def("OnRtnOpenAccountByBank", &CTraderHandler::OnRtnOpenAccountByBank)
		.def("OnRtnCancelAccountByBank", &CTraderHandler::OnRtnCancelAccountByBank)
		.def("OnRtnChangeAccountByBank", &CTraderHandler::OnRtnChangeAccountByBank)
		.def("Release", &CTraderHandler::Release)
		.def("Init", &CTraderHandler::Init)
		.def("Join", &CTraderHandler::Join)
		.def("GetTradingDay", &CTraderHandler::GetTradingDay)
		.def("RegisterFront", &CTraderHandler::RegisterFront)
		.def("RegisterNameServer", &CTraderHandler::RegisterNameServer)
		.def("RegisterFensUserInfo", &CTraderHandler::RegisterFensUserInfo)
		.def("RegisterSpi", &CTraderHandler::RegisterSpi)
		.def("SubscribePrivateTopic", &CTraderHandler::SubscribePrivateTopic)
		.def("SubscribePublicTopic", &CTraderHandler::SubscribePublicTopic)
		.def("ReqAuthenticate", &CTraderHandler::ReqAuthenticate)
		.def("RegisterUserSystemInfo", &CTraderHandler::RegisterUserSystemInfo)
		.def("SubmitUserSystemInfo", &CTraderHandler::SubmitUserSystemInfo)
		.def("ReqUserLogin", &CTraderHandler::ReqUserLogin)
		.def("ReqUserLogout", &CTraderHandler::ReqUserLogout)
		.def("ReqUserPasswordUpdate", &CTraderHandler::ReqUserPasswordUpdate)
		.def("ReqTradingAccountPasswordUpdate", &CTraderHandler::ReqTradingAccountPasswordUpdate)
		.def("ReqUserAuthMethod", &CTraderHandler::ReqUserAuthMethod)
		.def("ReqGenUserCaptcha", &CTraderHandler::ReqGenUserCaptcha)
		.def("ReqGenUserText", &CTraderHandler::ReqGenUserText)
		.def("ReqUserLoginWithCaptcha", &CTraderHandler::ReqUserLoginWithCaptcha)
		.def("ReqUserLoginWithText", &CTraderHandler::ReqUserLoginWithText)
		.def("ReqUserLoginWithOTP", &CTraderHandler::ReqUserLoginWithOTP)
		.def("ReqOrderInsert", &CTraderHandler::ReqOrderInsert)
		.def("ReqParkedOrderInsert", &CTraderHandler::ReqParkedOrderInsert)
		.def("ReqParkedOrderAction", &CTraderHandler::ReqParkedOrderAction)
		.def("ReqOrderAction", &CTraderHandler::ReqOrderAction)
		.def("ReqQueryMaxOrderVolume", &CTraderHandler::ReqQueryMaxOrderVolume)
		.def("ReqSettlementInfoConfirm", &CTraderHandler::ReqSettlementInfoConfirm)
		.def("ReqRemoveParkedOrder", &CTraderHandler::ReqRemoveParkedOrder)
		.def("ReqRemoveParkedOrderAction", &CTraderHandler::ReqRemoveParkedOrderAction)
		.def("ReqExecOrderInsert", &CTraderHandler::ReqExecOrderInsert)
		.def("ReqExecOrderAction", &CTraderHandler::ReqExecOrderAction)
		.def("ReqForQuoteInsert", &CTraderHandler::ReqForQuoteInsert)
		.def("ReqQuoteInsert", &CTraderHandler::ReqQuoteInsert)
		.def("ReqQuoteAction", &CTraderHandler::ReqQuoteAction)
		.def("ReqBatchOrderAction", &CTraderHandler::ReqBatchOrderAction)
		.def("ReqOptionSelfCloseInsert", &CTraderHandler::ReqOptionSelfCloseInsert)
		.def("ReqOptionSelfCloseAction", &CTraderHandler::ReqOptionSelfCloseAction)
		.def("ReqCombActionInsert", &CTraderHandler::ReqCombActionInsert)
		.def("ReqQryOrder", &CTraderHandler::ReqQryOrder)
		.def("ReqQryTrade", &CTraderHandler::ReqQryTrade)
		.def("ReqQryInvestorPosition", &CTraderHandler::ReqQryInvestorPosition)
		.def("ReqQryTradingAccount", &CTraderHandler::ReqQryTradingAccount)
		.def("ReqQryInvestor", &CTraderHandler::ReqQryInvestor)
		.def("ReqQryTradingCode", &CTraderHandler::ReqQryTradingCode)
		.def("ReqQryInstrumentMarginRate", &CTraderHandler::ReqQryInstrumentMarginRate)
		.def("ReqQryInstrumentCommissionRate", &CTraderHandler::ReqQryInstrumentCommissionRate)
		.def("ReqQryExchange", &CTraderHandler::ReqQryExchange)
		.def("ReqQryProduct", &CTraderHandler::ReqQryProduct)
		.def("ReqQryInstrument", &CTraderHandler::ReqQryInstrument)
		.def("ReqQryDepthMarketData", &CTraderHandler::ReqQryDepthMarketData)
		.def("ReqQrySettlementInfo", &CTraderHandler::ReqQrySettlementInfo)
		.def("ReqQryTransferBank", &CTraderHandler::ReqQryTransferBank)
		.def("ReqQryInvestorPositionDetail", &CTraderHandler::ReqQryInvestorPositionDetail)
		.def("ReqQryNotice", &CTraderHandler::ReqQryNotice)
		.def("ReqQrySettlementInfoConfirm", &CTraderHandler::ReqQrySettlementInfoConfirm)
		.def("ReqQryInvestorPositionCombineDetail", &CTraderHandler::ReqQryInvestorPositionCombineDetail)
		.def("ReqQryCFMMCTradingAccountKey", &CTraderHandler::ReqQryCFMMCTradingAccountKey)
		.def("ReqQryEWarrantOffset", &CTraderHandler::ReqQryEWarrantOffset)
		.def("ReqQryInvestorProductGroupMargin", &CTraderHandler::ReqQryInvestorProductGroupMargin)
		.def("ReqQryExchangeMarginRate", &CTraderHandler::ReqQryExchangeMarginRate)
		.def("ReqQryExchangeMarginRateAdjust", &CTraderHandler::ReqQryExchangeMarginRateAdjust)
		.def("ReqQryExchangeRate", &CTraderHandler::ReqQryExchangeRate)
		.def("ReqQrySecAgentACIDMap", &CTraderHandler::ReqQrySecAgentACIDMap)
		.def("ReqQryProductExchRate", &CTraderHandler::ReqQryProductExchRate)
		.def("ReqQryProductGroup", &CTraderHandler::ReqQryProductGroup)
		.def("ReqQryMMInstrumentCommissionRate", &CTraderHandler::ReqQryMMInstrumentCommissionRate)
		.def("ReqQryMMOptionInstrCommRate", &CTraderHandler::ReqQryMMOptionInstrCommRate)
		.def("ReqQryInstrumentOrderCommRate", &CTraderHandler::ReqQryInstrumentOrderCommRate)
		.def("ReqQrySecAgentTradingAccount", &CTraderHandler::ReqQrySecAgentTradingAccount)
		.def("ReqQrySecAgentCheckMode", &CTraderHandler::ReqQrySecAgentCheckMode)
		.def("ReqQrySecAgentTradeInfo", &CTraderHandler::ReqQrySecAgentTradeInfo)
		.def("ReqQryOptionInstrTradeCost", &CTraderHandler::ReqQryOptionInstrTradeCost)
		.def("ReqQryOptionInstrCommRate", &CTraderHandler::ReqQryOptionInstrCommRate)
		.def("ReqQryExecOrder", &CTraderHandler::ReqQryExecOrder)
		.def("ReqQryForQuote", &CTraderHandler::ReqQryForQuote)
		.def("ReqQryQuote", &CTraderHandler::ReqQryQuote)
		.def("ReqQryOptionSelfClose", &CTraderHandler::ReqQryOptionSelfClose)
		.def("ReqQryInvestUnit", &CTraderHandler::ReqQryInvestUnit)
		.def("ReqQryCombInstrumentGuard", &CTraderHandler::ReqQryCombInstrumentGuard)
		.def("ReqQryCombAction", &CTraderHandler::ReqQryCombAction)
		.def("ReqQryTransferSerial", &CTraderHandler::ReqQryTransferSerial)
		.def("ReqQryAccountregister", &CTraderHandler::ReqQryAccountregister)
		.def("ReqQryContractBank", &CTraderHandler::ReqQryContractBank)
		.def("ReqQryParkedOrder", &CTraderHandler::ReqQryParkedOrder)
		.def("ReqQryParkedOrderAction", &CTraderHandler::ReqQryParkedOrderAction)
		.def("ReqQryTradingNotice", &CTraderHandler::ReqQryTradingNotice)
		.def("ReqQryBrokerTradingParams", &CTraderHandler::ReqQryBrokerTradingParams)
		.def("ReqQryBrokerTradingAlgos", &CTraderHandler::ReqQryBrokerTradingAlgos)
		.def("ReqQueryCFMMCTradingAccountToken", &CTraderHandler::ReqQueryCFMMCTradingAccountToken)
		.def("ReqFromBankToFutureByFuture", &CTraderHandler::ReqFromBankToFutureByFuture)
		.def("ReqFromFutureToBankByFuture", &CTraderHandler::ReqFromFutureToBankByFuture)
		.def("ReqQueryBankAccountMoneyByFuture", &CTraderHandler::ReqQueryBankAccountMoneyByFuture)
		;
}
