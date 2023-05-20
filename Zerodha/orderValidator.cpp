#include"orderValidator.h"
#include"system.h"
bool OrderValidator::validateOrder(string pUserId, Order* order){
    User* user = System::getUser(pUserId);
    if(order->getTxnType() ==  TXN_TYPE::BUY){
        cout<<"Checking if user has funds to buy for TXN_TYPE::BUY" <<endl;
    }
    else {
        cout<<"Checking if user has the stocks to sell " <<endl;
    }
 cout<<"Assuming user has made valid order request " <<endl;
 return true;

}