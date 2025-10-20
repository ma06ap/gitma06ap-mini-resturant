#pragma once


#include <fstream>
#include <iostream>
#include <sstream>


#include "order-list.h"
#include "order.h"
#include "student.h"
#include "item-list.h"


using namespace std;

string ls = "Orders.csv";
void write (OrderList& list) {
    ofstream file (ls,ios::trunc);
    file.close();
    file.open(ls,ios::app);
    Order* f = list.get_head();
    while (f != nullptr)
    {
        file << f->get_id() << "," << f->get_student()->get_fn() << "," << f->get_student()->get_ln() << "," << f->get_student()->get_id() << ",";
        file << f->get_status();
        Item* curr = f->get_Itemes()->get_head();
        while (curr != nullptr) {
        file << curr->get_name() << "," << curr->get_price() << "," << curr->get_type() << ",";
        curr = curr->get_next();
        }
        file << endl;
        f = f->get_next();
    }
    

}

void read () ;