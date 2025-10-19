#pragma once

#include "item.h"

using namespace std;

class ItemList {
private:
    Item* head;
    int size;

public:
    ItemList();
    
    void add_item(string name, float price, int type);
    void display_items();
    Item* find(string name);
    void remove(string name);
    int get_size();







};