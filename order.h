#pragma once 

#include "student.h"
#include "item-list.h"



using namespace std;

enum OrderStatus{
    Pending,
    Inprocess,
    delivered,
    cancled,
};


class Order {
private: 
    Student* customer;
    ItemList* lorder;
    Order* next;
    OrderStatus status;
    int id;
public: 
    Order(Student* c,ItemList* il,Order* ne);
    Student* get_student ();
    ItemList* get_Itemes ();
    Order* get_next ();
    void change_status(int in);
    void set_id (int i);
    int get_id ();
    void display ();
};

