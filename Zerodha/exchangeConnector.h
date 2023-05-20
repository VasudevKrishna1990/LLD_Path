#pragma once
#include"common.h"
#include<mutex>
#include"order.h"

class ExchangeConnector{
    ExchangeConnector() {};
    static ExchangeConnector* exchangeConnectorInstance;
    static mutex mtx;
public:
    static ExchangeConnector * getExchangeConnectorInstance();
    static void sendOrdertoExchange(string userId, Order* order);
    
};