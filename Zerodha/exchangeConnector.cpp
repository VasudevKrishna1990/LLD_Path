#include"exchangeConnector.h"

ExchangeConnector* ExchangeConnector::exchangeConnectorInstance = nullptr; 
mutex ExchangeConnector::mtx ;

ExchangeConnector* ExchangeConnector:: getExchangeConnectorInstance(){
    if(exchangeConnectorInstance == nullptr){
        mtx.lock();
            if(exchangeConnectorInstance == nullptr){

                exchangeConnectorInstance = new ExchangeConnector();
            }
        mtx.unlock();
    }
    return exchangeConnectorInstance;
}

void ExchangeConnector::sendOrdertoExchange(string userId, Order* order){
    cout<<"Order is sent to exchange " <<endl;
}
