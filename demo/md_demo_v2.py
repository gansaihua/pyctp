import pyctp
import time
import queue
import copy


class MdHandler(pyctp.CThostFtdcMdSpi):
    def __init__(self):
        pyctp.CThostFtdcMdSpi.__init__(self)

        self.q = None

    def set_q(self, q):
        self.q = q

    def start(self):
        self.api = pyctp.CThostFtdcMdApi.CreateFtdcMdApi(
            "flow/md/", False, False)
        print(self.api.GetApiVersion())
        self.api.RegisterFront("tcp://180.168.146.187:10110")
        self.api.RegisterSpi(self)
        self.api.Init()

    def OnFrontConnected(self):
        print("OnFrontConnected")
        print(self.api.GetTradingDay())
        t = pyctp.CThostFtdcReqUserLoginField()
        self.api.ReqUserLogin(t, 0)

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        print("OnRspUserLogin")
        print(f"SessionID={pRspUserLogin.SessionID}")
        print(f"ErrorID={pRspInfo.ErrorID},ErrorMsg={pRspInfo.ErrorMsg}")

        instruments = ["au2104"]
        self.api.SubscribeMarketData(instruments, len(instruments))

    def OnRspSubMarketData(self, pSpecificInstrument, pRspInfo, nRequestID, bIsLast):
        print("OnRspSubMarketData:", pSpecificInstrument.to_dict())
        print("ErrorID=", pRspInfo.ErrorID)
        print("ErrorMsg=", pRspInfo.ErrorMsg)

    def OnRtnDepthMarketData(self, pDepthMarketData):
        self.q.put(pDepthMarketData.to_dict())


if __name__ == '__main__':
    md = MdHandler()
    q = queue.Queue()
    md.set_q(q)
    md.start()

    while(True):
        try:
            data = md.q.get()
            print(data)
        except queue.Empty:
            pass
