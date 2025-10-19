#pragma once

#include <string>
#include <iostream>

using namespace std;   

enum Item_type { food, drink, dessert };


class Item { 
private: 
    string name;
    float price;
    Item_type type;
    Item *next;
public:

    Item(string _name, float _price,int _type);
    Item(string _name, float _price,int _type, Item *next);
    void set_next (Item *next);

    float get_price();
    Item_type get_type();
    string get_name();
    Item* get_next ();

    void display();
    void copy(Item other);

};