import pyctp

import time


class MdSpi(pyctp.CThostFtdcMdSpi):
    def __init__(self, api):
        pyctp.CThostFtdcMdSpi.__init__(self)
        self.api = api
        print(api.GetApiVersion())

    def OnFrontConnected(self):
        print("OnFrontConnected")
        print(api.GetTradingDay())
        loginfield = pyctp.CThostFtdcReqUserLoginField()
        self.api.ReqUserLogin(loginfield, 0)

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        print("OnRspUserLogin")
        print(f"SessionID={pRspUserLogin.SessionID}")
        print(f"ErrorID={pRspInfo.ErrorID},ErrorMsg={pRspInfo.ErrorMsg}")

        instruments = ["au2103", "IC2103", "i2103", "T2103"]
        self.api.SubscribeMarketData(instruments, len(instruments))

    def OnRspSubMarketData(self, pSpecificInstrument: 'CThostFtdcSpecificInstrumentField', pRspInfo, nRequestID, bIsLast):
        print("OnRspSubMarketData")
        print("InstrumentID=", pSpecificInstrument.InstrumentID)
        print("ErrorID=", pRspInfo.ErrorID)
        print("ErrorMsg=", pRspInfo.ErrorMsg)

    def OnRtnDepthMarketData(self, pDepthMarketData):
        print("OnRtnDepthMarketData")
        print(pDepthMarketData.TradingDay,
              pDepthMarketData.InstrumentID,
              pDepthMarketData.LastPrice,
              pDepthMarketData.PreSettlementPrice,
              pDepthMarketData.PreClosePrice,
              pDepthMarketData.PreOpenInterest,
              pDepthMarketData.OpenPrice,
              pDepthMarketData.HighestPrice,
              pDepthMarketData.LowestPrice,
              pDepthMarketData.Volume,
              pDepthMarketData.Turnover,
              pDepthMarketData.OpenInterest,
              pDepthMarketData.ClosePrice,
              pDepthMarketData.SettlementPrice,
              pDepthMarketData.UpperLimitPrice,
              pDepthMarketData.LowerLimitPrice,
              pDepthMarketData.PreDelta,
              pDepthMarketData.CurrDelta,
              pDepthMarketData.UpdateTime,
              pDepthMarketData.UpdateMillisec,
              pDepthMarketData.BidPrice1,
              pDepthMarketData.BidVolume1,
              pDepthMarketData.AskPrice1,
              pDepthMarketData.AskVolume1,
              pDepthMarketData.AveragePrice,
              pDepthMarketData.ActionDay)


if __name__ == '__main__':
    api = pyctp.CThostFtdcMdApi.CreateFtdcMdApi("flow/md/", False, False)
    spi = MdSpi(api)
    api.RegisterFront("tcp://180.168.146.187:10110")
    api.RegisterSpi(spi)
    api.Init()
    time.sleep(3)
