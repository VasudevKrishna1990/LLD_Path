
#pragma once
#include"common.h"
#include"stock.h"

class Order{
    TXN_TYPE txnType;
    ORDER_TYPE orderType;
    double price;
    int qty;
    Stock * stock;
    // transactions
    // ORDER_TYPE status
    //time
    EXCH exch;

    public:
     Order(TXN_TYPE txn_Type,ORDER_TYPE order_type,double pPrice, int pQty,Stock * pStock, EXCH pExch):
     txnType(txn_Type),orderType(order_type),price(pPrice),qty(pQty),stock(pStock),exch(pExch){}

    TXN_TYPE getTxnType();
            

};