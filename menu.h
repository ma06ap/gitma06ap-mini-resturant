#pragma once

#include <string>
#include <iostream>

#include "item-list.h"
#include "item.h"

using namespace std;



class Menu {
private:
    string title;
    ItemList items;
public:
    Menu(string _title);
    void add_item(Item item);
    void display_menu();
    void remove_item(string name);





};