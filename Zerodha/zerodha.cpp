#include"common.h"
#include"user.h"
#include"orderMgr.h"
int main(){

    User * user = new User("rajat");
    Stock * stock = new Stock("TCS",1000,EXCH::NSE);
    Order * order = new Order(TXN_TYPE::BUY,ORDER_TYPE::LIMIT,1100,20,stock,EXCH::NSE);
    OrderMgr * orderMgr = new OrderMgr();
    orderMgr->PlaceOrder("rajat",order);

    return 0;
}