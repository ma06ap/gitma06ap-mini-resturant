#include "order-list.h"

OrderList::OrderList() {
    head = nullptr;
    size = 0;
};
void OrderList::add_order(Order *inp) {
    Order* n = new Order(inp->get_student(),inp->get_Itemes(),head);
    n->set_id (inp->get_id());
    n->Setst(inp->get_status());
    head = n;
    size++;
};
void OrderList::display() {
    Order *current = head;
    while(current != nullptr) {
        // current->get_student()->display();
        // current->get_Itemes()->display_items();
        current->display();
        current = current->get_next();
    }
}
Order* OrderList::search (int _id) {
    //
    // cout << "id search" << endl;
    Order* current = head;
    while (current != nullptr) {
        //
            // cout << current->get_id() << endl;
            // current->display();
        if (current->get_id() == _id) {
            return current;
        }
        current = current->get_next();
    }
    return nullptr;
};

Order* OrderList::get_head() {
    return head;
}