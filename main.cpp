#include <iostream>
#include <string>


#include "item.h"
#include "item-list.h"
#include "main.h"
#include "menu.h"


using namespace std;


int main() {
    Item item1("Burger", 5.99, 0);
    Item item2("Coke", 1.99, 1);
    Item item3("Ice Cream", 2.99, 2);

    // item1.set_next(&item2);
    // item2.set_next(&item3);

    // Item* current = &item1;
    // while (current != nullptr) {
    //     current->display();
    //     current = current->get_next();
    // }

    // ItemList list;
    // list.add_item("Burger", 5.99, 0);
    // list.add_item("Coke", 1.99, 1);
    // list.display_items();
    // Item* found_item = list.find("Coke");
    // if (found_item != nullptr) {
    //     cout << "Found item: ";
    //     found_item->display();
    // } else {
    //     cout << "Item not found." << endl;
    // }
    // list.remove("Burger");
    // list.display_items();  
    // list.add_item("Ice Cream", 2.99, 2);
    // cout << list.get_size();
    
    // Menu menu("Lunch Menu");
    // menu.add_item(item1);
    // menu.add_item(item2);
    // menu.add_item(item3);
    // menu.display_menu();
    // menu.remove_item("Coke");
    // menu.display_menu();




    return 0;
}
