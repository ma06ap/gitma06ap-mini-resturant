#include <iostream>


#include "order.h"



Order::Order(Student* c,ItemList* il,Order* ne) {
    customer = c;
    lorder = il;
    next = ne;
    status = Pending;
    id = 0; 
}



Student* Order::get_student () {
    return customer;
}
ItemList* Order::get_Itemes () {
    return lorder;
}
Order* Order::get_next () {
    return next;
}


void Order::change_status(int in) {
    //
    cout << "enter change menu" << endl;
    if (status == cancled) {
        cout << "Order was canceled" << endl;
        return;
    }
    else if (status == delivered) {
        cout << "Order was delivered" << endl;
        return;
    }
    else {
        status = static_cast<OrderStatus>(in);
        if (in == 1) {
            cout << "Order in process" << endl;
        } else if (in == 2) {
            cout << "Order delivered" << endl;
        }
        else if (in == 3) {
            cout << "Order canceled." << endl;
        }
    }
}

void Order::set_id (int i) {
    id = i;
    cout << "id setted :" << id;
}

int Order::get_id () {
    return id;
}
void Order::display () {
    this->customer->display();
    this->lorder->display_items();
    cout << id << endl;
}