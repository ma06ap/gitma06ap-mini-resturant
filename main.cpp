#include <iostream>
#include <string>
#include <cstdlib>


#include "item-list.h"
#include "item.h"
#include "main.h"
#include "menu.h"
#include "order-list.h"
#include "order.h"
#include "student.h"
#include "file.h"


using namespace std;


int main() {
    Item t0("Salad" ,7.50, 0);
    Item t1("Burger" ,9.99 ,0);
    Item t2("Coffee" ,3.25, 1);
    Item t3("Soda" ,2.75, 1);
    Item t4("Cake" ,5.50 ,2);
    Item t5("Icecream" ,4.00 ,2);
    Item t6("Pizza" ,11.99, 0);
    Item t7("Juice" ,4.50, 1);
    Item t8("Pie" ,4.75, 2);
    Item t9("Steak" ,15.25, 0);
    


// Salad 7.50 0
// Coffee 3.25 1
// Soda 2.75 1
// Cake 5.50 2
// Icecream 4.00 2
// Pizza 11.99 0
// Juice 4.50 1
// Pie 4.75 2
// Steak 15.25 0

    Menu menu("Teriakaj");
    menu.add_item(t0);
    menu.add_item(t1);
    menu.add_item(t2);
    menu.add_item(t3);
    menu.add_item(t4);
    menu.add_item(t5);
    menu.add_item(t6);
    menu.add_item(t7);
    menu.add_item(t8);
    menu.add_item(t9);
    OrderList orders;
    int command;
    //
    int nom = read(&orders);
    nom ++;
    // int nom = 1;
    system("cls");
    // after add files ...............................................................................
    cout << "Enter suitable number :" << endl << "1.Menu" << endl << "2.New order" << endl << "3.Order delivered" << endl << "4.Cancle order" << endl << "5.Change order" << endl << "6.Review" << endl <<  "0.Exit" << endl;
    cin >> command;
    while (command)
    {
        if (command == 1) {
            menu.display_menu();
        }
        if (command == 2) {
            string fn,ln,id;
            cout << "Enter first name: " ;
            cin >> fn;
            cout << "Enter last name: " ;
            cin >> ln;
            cout << "Enter Id: " ;
            cin >> id;
            Student* st = new Student(fn,ln,id);
            ItemList* ord = new ItemList();
            string it;
            cout << "Witch items do you want to add (Done = 0) : " ;
            while (cin>>it)
            {
                if (it == "0") {
                    break;
                }
                // cout << "*********************" << endl;
                Item* temp = menu.items.find(it);
                if (temp != nullptr) {
                    // ord->add_item((*(menu.items.find(it))).get_name(),(*(menu.items.find(it))).get_price(),(*(menu.items.find(it))).get_type());
                    ord->add_item(temp->get_name(),temp->get_price(),temp->get_type());
                    // menu.items.find(it)->display();
                    // cout << "founded" << endl;
                    // cout << "loop" << endl;
    
                } else {
                    cout << "not found" << endl;
                }
            }
            // delete ord;
            // delete st;
            // cout << "outed" << endl;
            Order* of = new Order(st,ord,nullptr);
            // cout << nom << "   num" << endl;
            // cout << "Set" << endl;
            // of->display();
            of->set_id(nom);
            // cout << "Id setted" << endl;
            // of->display();
            nom++;
            orders.add_order(of);
            orders.display();
            of->change_status(1);
            delete of;
        }
        if (command == 3) {
           int i;
            cout << "Please enter order id :" << endl;
            cin >> i; 
            orders.search(i)->change_status(2);
            // orders.search(i)->display();
            // orders.search(i)->change_status(2);
        }
        if (command == 4) {
            int i;
            cout << "Please enter order id :" << endl;
            cin >> i; 
            orders.search(i)->change_status(3);
        }
        if (command == 5) {
            int i;
            cout << "Please enter order id :" << endl;
            cin >> i; 
            OrderStatus sts = orders.search(i)->get_status();
            if (sts == cancled) {
                cout << "This order was canceled" << endl;
            }
            else if (sts == delivered) {
                cout << "This order was delivered" << endl;
            }
            else {
                cout << "1.Add " << endl << "2.Remove" << endl  << "0.Exit" << endl;
                
                int change;
                cin >> change;
                cout << "Enter name: ";
                string item_name;
                cin >> item_name;
                if (change == 1) {
                    Item* n = menu.items.find(item_name);
                    if (n != nullptr) {
                        orders.search(i)->get_Itemes()->add_item(n->get_name(),n->get_price(),n->get_type());

                    }
                    else {
                        cout << "Item not found." << endl;
                    }
                }
                else if (change == 2) {
                    Item* n = orders.search(i)->get_Itemes()->find(item_name);
                    if (n != nullptr) {
                        orders.search(i)->get_Itemes()->remove(item_name);
                    }
                    else {
                        cout << "Item not found." << endl;
                    }
                }
            
            }
        }
        if (command == 6) {
            orders.display();
        }

    



        cin >> command;
    }
    
    
    write(orders);


    return 0;
}
