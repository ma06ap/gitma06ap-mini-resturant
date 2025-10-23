# 📘 Computer Science Faculty Restaurant Management System

## 📖 Project Overview  
This project is designed to implement a **restaurant management system for the Computer Science Faculty**.  
The system is intended for the **front-desk staff** to manage the restaurant’s daily operations such as registering new orders, changing their status, canceling or modifying them, and reviewing all recorded orders.

### Main Menu Options  
1. **Menu** – Displays all available dishes, drinks, and appetizers.  
2. **New Order** – Registers a new order by receiving the student’s name, surname, and student ID.  
3. **Order Delivered** – Updates an order’s status to *Delivered*.  
4. **Cancel Order** – Cancels an order if it has not been delivered yet.  
5. **Change Order** – Allows editing of an active order (adding, removing, or replacing items).  
6. **Review** – Displays a complete list of all orders with customer information and order status.  

---

## ⚙️ Technical Details  
- **Language:** C++  
- **Data Structure:** Linked List  
- **Persistent File:** `orders.csv`  
- Data is **loaded once** at the beginning of the program and **completely rewritten** upon exit.  
- Each order has a unique order number and one of the following statuses:  
  - 🟡 *In Progress*  
  - 🟢 *Delivered*  
  - 🔴 *Canceled*  

---

## 🧱 Class Structure  

### `Item`  
Stores information about a single menu item, including its name, type (dish, drink, or appetizer), and price.  

### `ItemList`  
A linked list that holds multiple items, used both for menus and orders.  

### `Menu`  
Represents the restaurant’s menu. It contains a title and an `ItemList` object that stores all menu items.  

### `Student`  
Holds student information including first name, last name, and student ID.  

### `Order`  
Represents a customer’s order and includes:  
- A pointer to a `Student` object  
- A pointer to an `ItemList` (the ordered items)  
- The current order status (*In Progress*, *Delivered*, *Canceled*)  

### `OrderList`  
A linked list that stores all orders and provides operations for adding, searching, modifying, or removing them.  

### File Handler  
Manages all file operations. It reads data from `orders.csv` once at startup and rewrites everything back at shutdown.  

---

## 💾 Data Persistence  
- All orders are saved in **`orders.csv`**.  
- Data is loaded into memory at program startup and fully rewritten at program exit to ensure all changes are stored.

---

## 💬 A Little Thank You  
Huge thanks to our amazing **TAs** for kindly extending the deadline — truly heroic work saving everyone in the final moments! 😄  
