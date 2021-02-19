#include "ThostFtdcTraderApi.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;


class PyThostFtdcTraderSpi : public CThostFtdcTraderSpi {
public:
    using CThostFtdcTraderSpi::CThostFtdcTraderSpi;

    void OnFrontConnected() override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnFrontConnected); }
    void OnFrontDisconnected(int nReason) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnFrontDisconnected, nReason); }
    void OnHeartBeatWarning(int nTimeLapse) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnHeartBeatWarning, nTimeLapse); }
    void OnRspAuthenticate(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspAuthenticate, pRspAuthenticateField, pRspInfo, nRequestID, bIsLast); }
    void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspUserLogin, pRspUserLogin, pRspInfo, nRequestID, bIsLast); }
    void OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspUserLogout, pUserLogout, pRspInfo, nRequestID, bIsLast); }
    void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspUserPasswordUpdate, pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast); }
    void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspTradingAccountPasswordUpdate, pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast); }
    void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField* pRspUserAuthMethod, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspUserAuthMethod, pRspUserAuthMethod, pRspInfo, nRequestID, bIsLast); }
    void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField* pRspGenUserCaptcha, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspGenUserCaptcha, pRspGenUserCaptcha, pRspInfo, nRequestID, bIsLast); }
    void OnRspGenUserText(CThostFtdcRspGenUserTextField* pRspGenUserText, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspGenUserText, pRspGenUserText, pRspInfo, nRequestID, bIsLast); }
    void OnRspOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspOrderInsert, pInputOrder, pRspInfo, nRequestID, bIsLast); }
    void OnRspParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspParkedOrderInsert, pParkedOrder, pRspInfo, nRequestID, bIsLast); }
    void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspParkedOrderAction, pParkedOrderAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspOrderAction, pInputOrderAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField* pQryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryMaxOrderVolume, pQryMaxOrderVolume, pRspInfo, nRequestID, bIsLast); }
    void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspSettlementInfoConfirm, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast); }
    void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspRemoveParkedOrder, pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast); }
    void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspRemoveParkedOrderAction, pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspExecOrderInsert, pInputExecOrder, pRspInfo, nRequestID, bIsLast); }
    void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspExecOrderAction, pInputExecOrderAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspForQuoteInsert, pInputForQuote, pRspInfo, nRequestID, bIsLast); }
    void OnRspQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQuoteInsert, pInputQuote, pRspInfo, nRequestID, bIsLast); }
    void OnRspQuoteAction(CThostFtdcInputQuoteActionField* pInputQuoteAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQuoteAction, pInputQuoteAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspBatchOrderAction, pInputBatchOrderAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspOptionSelfCloseInsert, pInputOptionSelfClose, pRspInfo, nRequestID, bIsLast); }
    void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspOptionSelfCloseAction, pInputOptionSelfCloseAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspCombActionInsert, pInputCombAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryOrder(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryOrder, pOrder, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryTrade(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryTrade, pTrade, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInvestorPosition, pInvestorPosition, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryTradingAccount, pTradingAccount, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInvestor(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInvestor, pInvestor, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryTradingCode(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryTradingCode, pTradingCode, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInstrumentMarginRate, pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInstrumentCommissionRate, pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryExchange(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryExchange, pExchange, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryProduct(CThostFtdcProductField* pProduct, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryProduct, pProduct, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInstrument(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInstrument, pInstrument, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryDepthMarketData, pDepthMarketData, pRspInfo, nRequestID, bIsLast); }
    void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQrySettlementInfo, pSettlementInfo, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryTransferBank(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryTransferBank, pTransferBank, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInvestorPositionDetail, pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryNotice(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryNotice, pNotice, pRspInfo, nRequestID, bIsLast); }
    void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQrySettlementInfoConfirm, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInvestorPositionCombineDetail, pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryCFMMCTradingAccountKey, pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryEWarrantOffset, pEWarrantOffset, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField* pInvestorProductGroupMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInvestorProductGroupMargin, pInvestorProductGroupMargin, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField* pExchangeMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryExchangeMarginRate, pExchangeMarginRate, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField* pExchangeMarginRateAdjust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryExchangeMarginRateAdjust, pExchangeMarginRateAdjust, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryExchangeRate(CThostFtdcExchangeRateField* pExchangeRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryExchangeRate, pExchangeRate, pRspInfo, nRequestID, bIsLast); }
    void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField* pSecAgentACIDMap, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQrySecAgentACIDMap, pSecAgentACIDMap, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryProductExchRate(CThostFtdcProductExchRateField* pProductExchRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryProductExchRate, pProductExchRate, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryProductGroup(CThostFtdcProductGroupField* pProductGroup, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryProductGroup, pProductGroup, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField* pMMInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryMMInstrumentCommissionRate, pMMInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField* pMMOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryMMOptionInstrCommRate, pMMOptionInstrCommRate, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField* pInstrumentOrderCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInstrumentOrderCommRate, pInstrumentOrderCommRate, pRspInfo, nRequestID, bIsLast); }
    void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQrySecAgentTradingAccount, pTradingAccount, pRspInfo, nRequestID, bIsLast); }
    void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField* pSecAgentCheckMode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQrySecAgentCheckMode, pSecAgentCheckMode, pRspInfo, nRequestID, bIsLast); }
    void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField* pSecAgentTradeInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQrySecAgentTradeInfo, pSecAgentTradeInfo, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField* pOptionInstrTradeCost, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryOptionInstrTradeCost, pOptionInstrTradeCost, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField* pOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryOptionInstrCommRate, pOptionInstrCommRate, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryExecOrder(CThostFtdcExecOrderField* pExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryExecOrder, pExecOrder, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryForQuote(CThostFtdcForQuoteField* pForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryForQuote, pForQuote, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryQuote(CThostFtdcQuoteField* pQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryQuote, pQuote, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryOptionSelfClose, pOptionSelfClose, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryInvestUnit(CThostFtdcInvestUnitField* pInvestUnit, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryInvestUnit, pInvestUnit, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField* pCombInstrumentGuard, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryCombInstrumentGuard, pCombInstrumentGuard, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryCombAction(CThostFtdcCombActionField* pCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryCombAction, pCombAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryTransferSerial(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryTransferSerial, pTransferSerial, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryAccountregister(CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryAccountregister, pAccountregister, pRspInfo, nRequestID, bIsLast); }
    void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspError, pRspInfo, nRequestID, bIsLast); }
    void OnRtnOrder(CThostFtdcOrderField* pOrder) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnOrder, pOrder); }
    void OnRtnTrade(CThostFtdcTradeField* pTrade) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnTrade, pTrade); }
    void OnErrRtnOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnOrderInsert, pInputOrder, pRspInfo); }
    void OnErrRtnOrderAction(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnOrderAction, pOrderAction, pRspInfo); }
    void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField* pInstrumentStatus) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnInstrumentStatus, pInstrumentStatus); }
    void OnRtnBulletin(CThostFtdcBulletinField* pBulletin) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnBulletin, pBulletin); }
    void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnTradingNotice, pTradingNoticeInfo); }
    void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnErrorConditionalOrder, pErrorConditionalOrder); }
    void OnRtnExecOrder(CThostFtdcExecOrderField* pExecOrder) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnExecOrder, pExecOrder); }
    void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnExecOrderInsert, pInputExecOrder, pRspInfo); }
    void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField* pExecOrderAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnExecOrderAction, pExecOrderAction, pRspInfo); }
    void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnForQuoteInsert, pInputForQuote, pRspInfo); }
    void OnRtnQuote(CThostFtdcQuoteField* pQuote) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnQuote, pQuote); }
    void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnQuoteInsert, pInputQuote, pRspInfo); }
    void OnErrRtnQuoteAction(CThostFtdcQuoteActionField* pQuoteAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnQuoteAction, pQuoteAction, pRspInfo); }
    void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField* pForQuoteRsp) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnForQuoteRsp, pForQuoteRsp); }
    void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnCFMMCTradingAccountToken, pCFMMCTradingAccountToken); }
    void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField* pBatchOrderAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnBatchOrderAction, pBatchOrderAction, pRspInfo); }
    void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnOptionSelfClose, pOptionSelfClose); }
    void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnOptionSelfCloseInsert, pInputOptionSelfClose, pRspInfo); }
    void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField* pOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnOptionSelfCloseAction, pOptionSelfCloseAction, pRspInfo); }
    void OnRtnCombAction(CThostFtdcCombActionField* pCombAction) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnCombAction, pCombAction); }
    void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnCombActionInsert, pInputCombAction, pRspInfo); }
    void OnRspQryContractBank(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryContractBank, pContractBank, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryParkedOrder(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryParkedOrder, pParkedOrder, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryParkedOrderAction, pParkedOrderAction, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryTradingNotice(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryTradingNotice, pTradingNotice, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryBrokerTradingParams, pBrokerTradingParams, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryBrokerTradingAlgos, pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast); }
    void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQueryCFMMCTradingAccountToken, pQueryCFMMCTradingAccountToken, pRspInfo, nRequestID, bIsLast); }
    void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField* pRspTransfer) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnFromBankToFutureByBank, pRspTransfer); }
    void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField* pRspTransfer) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnFromFutureToBankByBank, pRspTransfer); }
    void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnRepealFromBankToFutureByBank, pRspRepeal); }
    void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnRepealFromFutureToBankByBank, pRspRepeal); }
    void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField* pRspTransfer) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnFromBankToFutureByFuture, pRspTransfer); }
    void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField* pRspTransfer) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnFromFutureToBankByFuture, pRspTransfer); }
    void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnRepealFromBankToFutureByFutureManual, pRspRepeal); }
    void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnRepealFromFutureToBankByFutureManual, pRspRepeal); }
    void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnQueryBankBalanceByFuture, pNotifyQueryAccount); }
    void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnBankToFutureByFuture, pReqTransfer, pRspInfo); }
    void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnFutureToBankByFuture, pReqTransfer, pRspInfo); }
    void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnRepealBankToFutureByFutureManual, pReqRepeal, pRspInfo); }
    void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnRepealFutureToBankByFutureManual, pReqRepeal, pRspInfo); }
    void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnErrRtnQueryBankBalanceByFuture, pReqQueryAccount, pRspInfo); }
    void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnRepealFromBankToFutureByFuture, pRspRepeal); }
    void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField* pRspRepeal) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnRepealFromFutureToBankByFuture, pRspRepeal); }
    void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspFromBankToFutureByFuture, pReqTransfer, pRspInfo, nRequestID, bIsLast); }
    void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspFromFutureToBankByFuture, pReqTransfer, pRspInfo, nRequestID, bIsLast); }
    void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQueryBankAccountMoneyByFuture, pReqQueryAccount, pRspInfo, nRequestID, bIsLast); }
    void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField* pOpenAccount) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnOpenAccountByBank, pOpenAccount); }
    void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField* pCancelAccount) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnCancelAccountByBank, pCancelAccount); }
    void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField* pChangeAccount) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRtnChangeAccountByBank, pChangeAccount); }
    void OnRspQryClassifiedInstrument(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryClassifiedInstrument, pInstrument, pRspInfo, nRequestID, bIsLast); }
    void OnRspQryCombPromotionParam(CThostFtdcCombPromotionParamField* pCombPromotionParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override { PYBIND11_OVERRIDE(void, CThostFtdcTraderSpi, OnRspQryCombPromotionParam, pCombPromotionParam, pRspInfo, nRequestID, bIsLast); }

};


void init_td_spi(py::module_& m) {
    py::class_<CThostFtdcTraderSpi, PyThostFtdcTraderSpi>(m, "CThostFtdcTraderSpi")
        .def(py::init<>())
        .def("OnFrontConnected", &CThostFtdcTraderSpi::OnFrontConnected)
        .def("OnFrontDisconnected", &CThostFtdcTraderSpi::OnFrontDisconnected)
        .def("OnHeartBeatWarning", &CThostFtdcTraderSpi::OnHeartBeatWarning)
        .def("OnRspAuthenticate", &CThostFtdcTraderSpi::OnRspAuthenticate)
        .def("OnRspUserLogin", &CThostFtdcTraderSpi::OnRspUserLogin)
        .def("OnRspUserLogout", &CThostFtdcTraderSpi::OnRspUserLogout)
        .def("OnRspUserPasswordUpdate", &CThostFtdcTraderSpi::OnRspUserPasswordUpdate)
        .def("OnRspTradingAccountPasswordUpdate", &CThostFtdcTraderSpi::OnRspTradingAccountPasswordUpdate)
        .def("OnRspUserAuthMethod", &CThostFtdcTraderSpi::OnRspUserAuthMethod)
        .def("OnRspGenUserCaptcha", &CThostFtdcTraderSpi::OnRspGenUserCaptcha)
        .def("OnRspGenUserText", &CThostFtdcTraderSpi::OnRspGenUserText)
        .def("OnRspOrderInsert", &CThostFtdcTraderSpi::OnRspOrderInsert)
        .def("OnRspParkedOrderInsert", &CThostFtdcTraderSpi::OnRspParkedOrderInsert)
        .def("OnRspParkedOrderAction", &CThostFtdcTraderSpi::OnRspParkedOrderAction)
        .def("OnRspOrderAction", &CThostFtdcTraderSpi::OnRspOrderAction)
        .def("OnRspQryMaxOrderVolume", &CThostFtdcTraderSpi::OnRspQryMaxOrderVolume)
        .def("OnRspSettlementInfoConfirm", &CThostFtdcTraderSpi::OnRspSettlementInfoConfirm)
        .def("OnRspRemoveParkedOrder", &CThostFtdcTraderSpi::OnRspRemoveParkedOrder)
        .def("OnRspRemoveParkedOrderAction", &CThostFtdcTraderSpi::OnRspRemoveParkedOrderAction)
        .def("OnRspExecOrderInsert", &CThostFtdcTraderSpi::OnRspExecOrderInsert)
        .def("OnRspExecOrderAction", &CThostFtdcTraderSpi::OnRspExecOrderAction)
        .def("OnRspForQuoteInsert", &CThostFtdcTraderSpi::OnRspForQuoteInsert)
        .def("OnRspQuoteInsert", &CThostFtdcTraderSpi::OnRspQuoteInsert)
        .def("OnRspQuoteAction", &CThostFtdcTraderSpi::OnRspQuoteAction)
        .def("OnRspBatchOrderAction", &CThostFtdcTraderSpi::OnRspBatchOrderAction)
        .def("OnRspOptionSelfCloseInsert", &CThostFtdcTraderSpi::OnRspOptionSelfCloseInsert)
        .def("OnRspOptionSelfCloseAction", &CThostFtdcTraderSpi::OnRspOptionSelfCloseAction)
        .def("OnRspCombActionInsert", &CThostFtdcTraderSpi::OnRspCombActionInsert)
        .def("OnRspQryOrder", &CThostFtdcTraderSpi::OnRspQryOrder)
        .def("OnRspQryTrade", &CThostFtdcTraderSpi::OnRspQryTrade)
        .def("OnRspQryInvestorPosition", &CThostFtdcTraderSpi::OnRspQryInvestorPosition)
        .def("OnRspQryTradingAccount", &CThostFtdcTraderSpi::OnRspQryTradingAccount)
        .def("OnRspQryInvestor", &CThostFtdcTraderSpi::OnRspQryInvestor)
        .def("OnRspQryTradingCode", &CThostFtdcTraderSpi::OnRspQryTradingCode)
        .def("OnRspQryInstrumentMarginRate", &CThostFtdcTraderSpi::OnRspQryInstrumentMarginRate)
        .def("OnRspQryInstrumentCommissionRate", &CThostFtdcTraderSpi::OnRspQryInstrumentCommissionRate)
        .def("OnRspQryExchange", &CThostFtdcTraderSpi::OnRspQryExchange)
        .def("OnRspQryProduct", &CThostFtdcTraderSpi::OnRspQryProduct)
        .def("OnRspQryInstrument", &CThostFtdcTraderSpi::OnRspQryInstrument)
        .def("OnRspQryDepthMarketData", &CThostFtdcTraderSpi::OnRspQryDepthMarketData)
        .def("OnRspQrySettlementInfo", &CThostFtdcTraderSpi::OnRspQrySettlementInfo)
        .def("OnRspQryTransferBank", &CThostFtdcTraderSpi::OnRspQryTransferBank)
        .def("OnRspQryInvestorPositionDetail", &CThostFtdcTraderSpi::OnRspQryInvestorPositionDetail)
        .def("OnRspQryNotice", &CThostFtdcTraderSpi::OnRspQryNotice)
        .def("OnRspQrySettlementInfoConfirm", &CThostFtdcTraderSpi::OnRspQrySettlementInfoConfirm)
        .def("OnRspQryInvestorPositionCombineDetail", &CThostFtdcTraderSpi::OnRspQryInvestorPositionCombineDetail)
        .def("OnRspQryCFMMCTradingAccountKey", &CThostFtdcTraderSpi::OnRspQryCFMMCTradingAccountKey)
        .def("OnRspQryEWarrantOffset", &CThostFtdcTraderSpi::OnRspQryEWarrantOffset)
        .def("OnRspQryInvestorProductGroupMargin", &CThostFtdcTraderSpi::OnRspQryInvestorProductGroupMargin)
        .def("OnRspQryExchangeMarginRate", &CThostFtdcTraderSpi::OnRspQryExchangeMarginRate)
        .def("OnRspQryExchangeMarginRateAdjust", &CThostFtdcTraderSpi::OnRspQryExchangeMarginRateAdjust)
        .def("OnRspQryExchangeRate", &CThostFtdcTraderSpi::OnRspQryExchangeRate)
        .def("OnRspQrySecAgentACIDMap", &CThostFtdcTraderSpi::OnRspQrySecAgentACIDMap)
        .def("OnRspQryProductExchRate", &CThostFtdcTraderSpi::OnRspQryProductExchRate)
        .def("OnRspQryProductGroup", &CThostFtdcTraderSpi::OnRspQryProductGroup)
        .def("OnRspQryMMInstrumentCommissionRate", &CThostFtdcTraderSpi::OnRspQryMMInstrumentCommissionRate)
        .def("OnRspQryMMOptionInstrCommRate", &CThostFtdcTraderSpi::OnRspQryMMOptionInstrCommRate)
        .def("OnRspQryInstrumentOrderCommRate", &CThostFtdcTraderSpi::OnRspQryInstrumentOrderCommRate)
        .def("OnRspQrySecAgentTradingAccount", &CThostFtdcTraderSpi::OnRspQrySecAgentTradingAccount)
        .def("OnRspQrySecAgentCheckMode", &CThostFtdcTraderSpi::OnRspQrySecAgentCheckMode)
        .def("OnRspQrySecAgentTradeInfo", &CThostFtdcTraderSpi::OnRspQrySecAgentTradeInfo)
        .def("OnRspQryOptionInstrTradeCost", &CThostFtdcTraderSpi::OnRspQryOptionInstrTradeCost)
        .def("OnRspQryOptionInstrCommRate", &CThostFtdcTraderSpi::OnRspQryOptionInstrCommRate)
        .def("OnRspQryExecOrder", &CThostFtdcTraderSpi::OnRspQryExecOrder)
        .def("OnRspQryForQuote", &CThostFtdcTraderSpi::OnRspQryForQuote)
        .def("OnRspQryQuote", &CThostFtdcTraderSpi::OnRspQryQuote)
        .def("OnRspQryOptionSelfClose", &CThostFtdcTraderSpi::OnRspQryOptionSelfClose)
        .def("OnRspQryInvestUnit", &CThostFtdcTraderSpi::OnRspQryInvestUnit)
        .def("OnRspQryCombInstrumentGuard", &CThostFtdcTraderSpi::OnRspQryCombInstrumentGuard)
        .def("OnRspQryCombAction", &CThostFtdcTraderSpi::OnRspQryCombAction)
        .def("OnRspQryTransferSerial", &CThostFtdcTraderSpi::OnRspQryTransferSerial)
        .def("OnRspQryAccountregister", &CThostFtdcTraderSpi::OnRspQryAccountregister)
        .def("OnRspError", &CThostFtdcTraderSpi::OnRspError)
        .def("OnRtnOrder", &CThostFtdcTraderSpi::OnRtnOrder)
        .def("OnRtnTrade", &CThostFtdcTraderSpi::OnRtnTrade)
        .def("OnErrRtnOrderInsert", &CThostFtdcTraderSpi::OnErrRtnOrderInsert)
        .def("OnErrRtnOrderAction", &CThostFtdcTraderSpi::OnErrRtnOrderAction)
        .def("OnRtnInstrumentStatus", &CThostFtdcTraderSpi::OnRtnInstrumentStatus)
        .def("OnRtnBulletin", &CThostFtdcTraderSpi::OnRtnBulletin)
        .def("OnRtnTradingNotice", &CThostFtdcTraderSpi::OnRtnTradingNotice)
        .def("OnRtnErrorConditionalOrder", &CThostFtdcTraderSpi::OnRtnErrorConditionalOrder)
        .def("OnRtnExecOrder", &CThostFtdcTraderSpi::OnRtnExecOrder)
        .def("OnErrRtnExecOrderInsert", &CThostFtdcTraderSpi::OnErrRtnExecOrderInsert)
        .def("OnErrRtnExecOrderAction", &CThostFtdcTraderSpi::OnErrRtnExecOrderAction)
        .def("OnErrRtnForQuoteInsert", &CThostFtdcTraderSpi::OnErrRtnForQuoteInsert)
        .def("OnRtnQuote", &CThostFtdcTraderSpi::OnRtnQuote)
        .def("OnErrRtnQuoteInsert", &CThostFtdcTraderSpi::OnErrRtnQuoteInsert)
        .def("OnErrRtnQuoteAction", &CThostFtdcTraderSpi::OnErrRtnQuoteAction)
        .def("OnRtnForQuoteRsp", &CThostFtdcTraderSpi::OnRtnForQuoteRsp)
        .def("OnRtnCFMMCTradingAccountToken", &CThostFtdcTraderSpi::OnRtnCFMMCTradingAccountToken)
        .def("OnErrRtnBatchOrderAction", &CThostFtdcTraderSpi::OnErrRtnBatchOrderAction)
        .def("OnRtnOptionSelfClose", &CThostFtdcTraderSpi::OnRtnOptionSelfClose)
        .def("OnErrRtnOptionSelfCloseInsert", &CThostFtdcTraderSpi::OnErrRtnOptionSelfCloseInsert)
        .def("OnErrRtnOptionSelfCloseAction", &CThostFtdcTraderSpi::OnErrRtnOptionSelfCloseAction)
        .def("OnRtnCombAction", &CThostFtdcTraderSpi::OnRtnCombAction)
        .def("OnErrRtnCombActionInsert", &CThostFtdcTraderSpi::OnErrRtnCombActionInsert)
        .def("OnRspQryContractBank", &CThostFtdcTraderSpi::OnRspQryContractBank)
        .def("OnRspQryParkedOrder", &CThostFtdcTraderSpi::OnRspQryParkedOrder)
        .def("OnRspQryParkedOrderAction", &CThostFtdcTraderSpi::OnRspQryParkedOrderAction)
        .def("OnRspQryTradingNotice", &CThostFtdcTraderSpi::OnRspQryTradingNotice)
        .def("OnRspQryBrokerTradingParams", &CThostFtdcTraderSpi::OnRspQryBrokerTradingParams)
        .def("OnRspQryBrokerTradingAlgos", &CThostFtdcTraderSpi::OnRspQryBrokerTradingAlgos)
        .def("OnRspQueryCFMMCTradingAccountToken", &CThostFtdcTraderSpi::OnRspQueryCFMMCTradingAccountToken)
        .def("OnRtnFromBankToFutureByBank", &CThostFtdcTraderSpi::OnRtnFromBankToFutureByBank)
        .def("OnRtnFromFutureToBankByBank", &CThostFtdcTraderSpi::OnRtnFromFutureToBankByBank)
        .def("OnRtnRepealFromBankToFutureByBank", &CThostFtdcTraderSpi::OnRtnRepealFromBankToFutureByBank)
        .def("OnRtnRepealFromFutureToBankByBank", &CThostFtdcTraderSpi::OnRtnRepealFromFutureToBankByBank)
        .def("OnRtnFromBankToFutureByFuture", &CThostFtdcTraderSpi::OnRtnFromBankToFutureByFuture)
        .def("OnRtnFromFutureToBankByFuture", &CThostFtdcTraderSpi::OnRtnFromFutureToBankByFuture)
        .def("OnRtnRepealFromBankToFutureByFutureManual", &CThostFtdcTraderSpi::OnRtnRepealFromBankToFutureByFutureManual)
        .def("OnRtnRepealFromFutureToBankByFutureManual", &CThostFtdcTraderSpi::OnRtnRepealFromFutureToBankByFutureManual)
        .def("OnRtnQueryBankBalanceByFuture", &CThostFtdcTraderSpi::OnRtnQueryBankBalanceByFuture)
        .def("OnErrRtnBankToFutureByFuture", &CThostFtdcTraderSpi::OnErrRtnBankToFutureByFuture)
        .def("OnErrRtnFutureToBankByFuture", &CThostFtdcTraderSpi::OnErrRtnFutureToBankByFuture)
        .def("OnErrRtnRepealBankToFutureByFutureManual", &CThostFtdcTraderSpi::OnErrRtnRepealBankToFutureByFutureManual)
        .def("OnErrRtnRepealFutureToBankByFutureManual", &CThostFtdcTraderSpi::OnErrRtnRepealFutureToBankByFutureManual)
        .def("OnErrRtnQueryBankBalanceByFuture", &CThostFtdcTraderSpi::OnErrRtnQueryBankBalanceByFuture)
        .def("OnRtnRepealFromBankToFutureByFuture", &CThostFtdcTraderSpi::OnRtnRepealFromBankToFutureByFuture)
        .def("OnRtnRepealFromFutureToBankByFuture", &CThostFtdcTraderSpi::OnRtnRepealFromFutureToBankByFuture)
        .def("OnRspFromBankToFutureByFuture", &CThostFtdcTraderSpi::OnRspFromBankToFutureByFuture)
        .def("OnRspFromFutureToBankByFuture", &CThostFtdcTraderSpi::OnRspFromFutureToBankByFuture)
        .def("OnRspQueryBankAccountMoneyByFuture", &CThostFtdcTraderSpi::OnRspQueryBankAccountMoneyByFuture)
        .def("OnRtnOpenAccountByBank", &CThostFtdcTraderSpi::OnRtnOpenAccountByBank)
        .def("OnRtnCancelAccountByBank", &CThostFtdcTraderSpi::OnRtnCancelAccountByBank)
        .def("OnRtnChangeAccountByBank", &CThostFtdcTraderSpi::OnRtnChangeAccountByBank)
        .def("OnRspQryClassifiedInstrument", &CThostFtdcTraderSpi::OnRspQryClassifiedInstrument)
        .def("OnRspQryCombPromotionParam", &CThostFtdcTraderSpi::OnRspQryCombPromotionParam)
        ;
}
