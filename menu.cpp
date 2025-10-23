#include <iostream>
#include <string>


#include "menu.h"

Menu::Menu(string _title) {
    title = _title;
}
void Menu::add_item(Item item) {
    items.add_item(item.get_name(), item.get_price(), static_cast<int>(item.get_type()));
}
void Menu::display_menu() {
    cout << title << endl;
    items.display_items();
}
void Menu::remove_item(string name) {
    items.remove(name);
}