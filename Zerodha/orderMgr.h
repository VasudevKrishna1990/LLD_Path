#pragma once
#include"orderValidator.h"
#include"orderExecutioner.h"

class OrderMgr{
    OrderValidator * validator;
    OrderExecutioner * executioner;

    public:
    OrderMgr(){
        OrderValidator* pOrdValidator = new OrderValidator();
        OrderExecutioner * pOrderExecutioner = new OrderExecutioner();
    }

    void PlaceOrder(string userId,Order*order){
        if(validator->validateOrder(userId,order)){
            executioner->placeOrder(userId,order);
        }
    }


};