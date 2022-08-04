import pyctp
import time

FrontAddr = "tcp://180.168.146.187:10100"
BROKERID = "9999"
USERID = ""
PASSWORD = ""
EXCHANGEID = "SHFE"
INSTRUMENTID = "cu2103"
PRICE = 66270
VOLUME = 1
DIRECTION = pyctp.THOST_FTDC_D_Buy
# DIRECTION = pyctp.THOST_FTDC_D_Sell
OFFSET = "0"
# OFFSET="1"


def ReqorderfieldInsert(api):
    print("ReqOrderInsert Start")
    t = pyctp.CThostFtdcInputOrderField()
    t.BrokerID = BROKERID
    t.ExchangeID = EXCHANGEID
    t.InstrumentID = INSTRUMENTID
    t.UserID = USERID
    t.InvestorID = USERID
    t.Direction = DIRECTION
    t.LimitPrice = PRICE
    t.VolumeTotalOriginal = VOLUME
    t.OrderPriceType = pyctp.THOST_FTDC_OPT_LimitPrice
    t.ContingentCondition = pyctp.THOST_FTDC_CC_Immediately
    t.TimeCondition = pyctp.THOST_FTDC_TC_GFD
    t.VolumeCondition = pyctp.THOST_FTDC_VC_AV
    t.CombHedgeFlag = "1"
    t.CombOffsetFlag = OFFSET
    t.GTDDate = ""
    t.OrderRef = "1"
    t.MinVolume = 0
    t.ForceCloseReason = pyctp.THOST_FTDC_FCC_NotForceClose
    t.IsAutoSuspend = 0
    api.ReqOrderInsert(t, 0)
    print("ReqOrderInsert End")


class CTradeSpi(pyctp.CThostFtdcTraderSpi):
    def __init__(self, api):
        pyctp.CThostFtdcTraderSpi.__init__(self)
        self.api = api

    def OnFrontConnected(self):
        print("OnFrontConnected")
        t = pyctp.CThostFtdcReqUserLoginField()
        t.BrokerID = BROKERID
        t.UserID = USERID
        t.Password = PASSWORD
        self.api.ReqUserLogin(t, 0)
        print("send login ok")

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        print("OnRspUserLogin")
        print("TradingDay=", pRspUserLogin.TradingDay)
        print("SessionID=", pRspUserLogin.SessionID)
        print("ErrorID=", pRspInfo.ErrorID)
        print("ErrorMsg=", pRspInfo.ErrorMsg)

        t = pyctp.CThostFtdcQrySettlementInfoField()
        t.BrokerID = BROKERID
        t.InvestorID = USERID
        t.TradingDay = pRspUserLogin.TradingDay
        self.api.ReqQrySettlementInfo(t, 0)
        print("send ReqQrySettlementInfo ok")

    def OnRspQrySettlementInfo(self, pSettlementInfo, pRspInfo, nRequestID, bIsLast):
        print("OnRspQrySettlementInfo")
        if pSettlementInfo is not None:
            print("content:", pSettlementInfo.Content)
        else:
            print("content null")
        if bIsLast:
            t = pyctp.CThostFtdcSettlementInfoConfirmField()
            t.BrokerID = BROKERID
            t.InvestorID = USERID
            self.api.ReqSettlementInfoConfirm(t, 0)
            print("send ReqSettlementInfoConfirm ok")

    def OnRspSettlementInfoConfirm(self, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast):
        print("OnRspSettlementInfoConfirm")
        print("ErrorID=", pRspInfo.ErrorID)
        print("ErrorMsg=", pRspInfo.ErrorMsg)
        ReqorderfieldInsert(self.api)
        print("send ReqorderfieldInsert ok")

    def OnRtnOrder(self, pOrder):
        print("OnRtnOrder")
        print("OrderStatus=", pOrder.OrderStatus)
        print("StatusMsg=", pOrder.StatusMsg)
        print("LimitPrice=", pOrder.LimitPrice)

    def OnRspOrderInsert(self, pInputOrder, pRspInfo, nRequestID, bIsLast):
        print("OnRspOrderInsert")
        print("ErrorID=", pRspInfo.ErrorID)
        print("ErrorMsg=", pRspInfo.ErrorMsg)


if __name__ == '__main__':
    api = pyctp.CThostFtdcTraderApi.CreateFtdcTraderApi("flow/td/")
    spi = CTradeSpi(api)
    api.RegisterSpi(spi)
    api.SubscribePrivateTopic(pyctp.THOST_TERT_QUICK)
    api.SubscribePublicTopic(pyctp.THOST_TERT_QUICK)
    api.RegisterFront(FrontAddr)
    api.Init()
    time.sleep(36)
