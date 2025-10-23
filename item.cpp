#include "item.h"

using namespace std;


Item::Item(string _name, float _price,int _type) {
    name = _name;
    price = _price;
    type = static_cast<Item_type>(_type);
    next = nullptr;
}
Item::Item(string _name, float _price,int _type, Item *next) {
    name = _name;
    price = _price;
    type = static_cast<Item_type>(_type);
    this->next = next;
}
void Item::set_next (Item *next) {
    this->next = next;
}
float Item::get_price() {
    return price;
}
Item_type Item::get_type() {
    return type;
}
string Item::get_name() {
    return name;
}
Item* Item::get_next () {
    return next;
}
void Item::display() {
    cout << "Item Name: " << name << ", Price: " << price << ", Type: ";
    switch (type) {
        case food:
            cout << "Food";
            break;
        case drink:
            cout << "Drink";
            break;
        case dessert:
            cout << "Dessert";
            break;
        default :
            break;
    }
    cout << endl;
}
void Item::copy(Item other) {
    name = other.name;
    price = other.price;
    type = other.type;
    next = other.next;
}
