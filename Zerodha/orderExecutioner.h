#pragma once

#include"order.h"
#include"exchangeConnector.h"
class OrderExecutioner{

public:

    void placeOrder(string userId, Order* order){
        ExchangeConnector * exchangeConnector = ExchangeConnector::getExchangeConnectorInstance();
        exchangeConnector->sendOrdertoExchange(userId,order);      
    }
};