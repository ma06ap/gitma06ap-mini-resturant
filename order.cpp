#include <iostream>


#include "order.h"



Order::Order(Student* c,ItemList* il,Order* ne) {
    customer = c;
    lorder = il;
    next = ne;
};



Student* Order::get_student () {
    return customer;
};
ItemList* Order::get_Itemes () {
    return lorder;
};
Order* Order::get_next () {
    return next;
};