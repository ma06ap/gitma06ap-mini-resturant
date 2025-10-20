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
// void write (OrderList& list) {
//     ofstream file(ls,ios::trunc);
//     file.close();
//     ofstream file(ls,ios::app);
//     // file.open();
//     Order* f = list.get_head();
//     while (f != nullptr)
//     {
//         f->customer;






//         f = f->get_next();
//     }
    
//     file.close();

// }