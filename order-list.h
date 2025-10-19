#pragma once

#include "order.h"


using namespace std;

class OrderList {
private:
    Order* head;
    int size;


public:

    OrderList();
    void add_order(Order *inp);
    void display();
    






};
