#include "order-list.h"

OrderList::OrderList() {
    head = nullptr;
    size = 0;
};
void OrderList::add_order(Order *inp) {
    Order* n = new Order(inp->get_student(),inp->get_Itemes(),head);
    head = n;
    size++;
};