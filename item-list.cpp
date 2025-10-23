#include "item-list.h"

using namespace std;

ItemList::ItemList() {
    head = nullptr;
    size = 0;
}
void ItemList::add_item(string name, float price, int type) {
    Item* new_item = new Item(name, price, type);
    new_item->set_next(head);
    head = new_item;
    size++;
}
void ItemList::display_items() {
    Item* current = head;
    while (current != nullptr) {
        current->display();
        current = current->get_next();
    }
}
Item* ItemList::find(string _name) {
    Item* current = head;
    
    while (current != nullptr) {
        if (current->get_name() == _name) {
            return current;

        }

        current = current->get_next();
    }
    return nullptr;
}
void ItemList::remove(string name) {
    Item* current = head;
    Item* previous = nullptr;
    while (current != nullptr) {
        if (current->get_name() == name) {
            if (previous == nullptr) {
                head = current->get_next();
            } else {
                previous->set_next(current->get_next());
            }
            delete current;
            size--;
            return;
        }
        previous = current;
        current = current->get_next();
    }
}
int ItemList::get_size() {
    return size;
}

Item* ItemList::get_head () {
    return head;
};