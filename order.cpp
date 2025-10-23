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
    int n = static_cast<int>(this->status);
    // cout << "This is n " << n << endl;
    // cout << "enter change menu" << endl;
    if (n == 3) {
        cout << "Order was canceled" << endl;
        return;
    }
    else if (n == 2) {
        cout << "Order was delivered" << endl;
        return;
    }
    else {
        // in = static_cast<OrderStatus>(in);
        if (in == 1) {
            this->status = Inprocess;
            cout << "Order in process" << endl;
            return;
        } else if (in == 2) {
            this->status = delivered;
            cout << "Order delivered" << endl;
            return;
        }
        else if (in == 3) {
            this->status = cancled;
            cout << "Order canceled." << endl;
            return;
        }
    }
}

void Order::set_id (int i) {
    this->id = i;
    // cout << "id setted :" << id;
}

int Order::get_id () {
    return id;
}
void Order::display () {
    this->customer->display();
    this->lorder->display_items();
    cout << status;
    cout << "  " << id << endl;
    // display status;
    cout << "----------------------------------" << endl;
}
void Order::Setst(int n) {
    if (n==0) {
        // cout << "inam 0 " << endl;
        status = Pending;
        // cout << " " << status << endl;
        // status = Pending;
        // status = Pending;
    } else if (n==1) {
        status = Inprocess;
        // cout << " " << status << endl;
        
    } else if (n==2) {
        status = delivered;
        // cout << " " << status << endl;
        
    } else if (n==3) {
        status = cancled;
        // cout << " " << status << endl;

    }
}

OrderStatus Order::get_status() {
    return status;
};