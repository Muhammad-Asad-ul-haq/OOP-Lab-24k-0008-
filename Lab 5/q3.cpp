#include <iostream>
#include <string>
using namespace std;

class MenuItem {
private:
    string name;
    int price;

public:
    MenuItem(string name, int price) {
        this->name = name;
        this->price = price;
    }

    void display() {
        cout << name << " - Rs." << price << endl;
    }

    int getPrice() {
        return price;
    }
};

class Payment {
private:
    int totalAmount;

public:
    Payment() {
        this->totalAmount=0;
    }

    void calculateBill(MenuItem* items[], int itemCount) {
        totalAmount = 0;
        for (int i = 0; i < itemCount; i++) {
            totalAmount += items[i]->getPrice();
        }
        cout << "Total Bill: Rs." << totalAmount << endl;
    }
};

class Order {
private:
    MenuItem* items[25];
    int itemCount;
    Payment payment;

public:
    Order() {
        this->itemCount=0;
    }

    void addItem(MenuItem* item) {
        if (itemCount < 25) {
            items[itemCount++] = item;
        } else {
            cout << "Sorry, the order is full!" << endl;
        }
    }

    void placeOrder() {
        cout << "--- Your Order ---" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << i + 1 << ". ";
            items[i]->display();
        }
        payment.calculateBill(items, itemCount);
    }
};

class Menu {
private:
    MenuItem* items[25];
    int itemCount;

public:
    Menu(){
        this->itemCount=0;
    }

    void addItem(MenuItem* item) {
        if (itemCount < 25) {
            items[itemCount++] = item;
        }
    }

    void displayMenu() {
        cout << "------ MENU ------" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << i + 1 << ". ";
            items[i]->display();
        }
    }
};

int main() {
    MenuItem clubSandwich("Club Sandwich", 760);
    MenuItem sushi("Sushi", 1230);
    MenuItem slush("Slush", 765);

    Menu menu;
    menu.addItem(&clubSandwich);
    menu.addItem(&sushi);
    menu.addItem(&slush);

    menu.displayMenu();

    Order order;
    order.addItem(&clubSandwich);
    order.addItem(&sushi);
    order.addItem(&sushi);

    order.placeOrder();

    return 0;
}