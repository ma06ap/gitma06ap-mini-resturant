#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

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
        file << (f->get_status()) << ",";
        Item* curr = f->get_Itemes()->get_head();
        while (curr != nullptr) {
        file << curr->get_name() << "," << curr->get_price() << "," << curr->get_type() << ",";
        curr = curr->get_next();
        }
        file << endl;
        f = f->get_next();
    }
    

}
int read (OrderList* orders) {
    ifstream file(ls);
    int max = 0;
    if(file.peek() == ifstream::traits_type::eof()) {
        return 0;
    } else {

        bool flag = 0;
        string line;
        while (getline(file, line)) {
            int ord_id;
            string fn , ln , stid;
            int ordtus;
            stringstream ss(line);
            string cell;
            vector<string> row;
            while (getline(ss, cell, ',')) {
                row.push_back(cell);
            }
            {
                if (row.empty()) {
                    return 0;
                }
                ord_id = stoi(row.at(0));
                if (!max) {
                    max = ord_id;
                }
                if (max < ord_id) {
                    max = ord_id;
                }
                fn = row.at(1);
                ln = row.at(2);
                stid = row.at(3);
                Student* student = new Student(fn,ln,stid);
                ItemList* itls = new ItemList();
                ordtus = stoi(row.at(4));
                cout << "I am here";
                for (size_t i = 5; i < row.size(); i++)
                {
                    string it_name = row.at(i++);
                    int price = stoi(row.at(i++));
                    int type = stoi(row.at(i));
                    
                    itls->add_item(it_name,price,type);
                }
                Order* ordd = new Order(student,itls,nullptr);
                ordd->set_id(ord_id);
                ordd->display();
                ordd->Setst(ordtus);
                ordd->display();
                orders->add_order(ordd);
                
            }
            row.clear();
        }
    }
    return max;
    
} ;