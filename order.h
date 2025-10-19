#pragma once 

#include "student.h"
#include "item-list.h"



using namespace std;




class Order {
private: 
    Student* customer;
    ItemList* lorder;
    Order* next;
public: 
    Order(Student* c,ItemList* il,Order* ne);
    Student* get_student ();
    ItemList* get_Itemes ();
    Order* get_next ();



};

