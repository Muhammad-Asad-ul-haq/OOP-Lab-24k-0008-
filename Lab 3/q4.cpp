#include <iostream>
using namespace std;

class StationeryShop {
    string items[100]; 
    double prices[100]; 
    int count = 0; 

public:
    void addItem(string item, double price) {
        items[count] = item;
        prices[count] = price;
        count++;
        cout << "Item added\n";
    }

    
    void viewItems() {
        if (count == 0) {
            cout << "No items in the shop\n";
            return;
        }
        cout << "Items in the shop:\n";
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". " << items[i] << " >> $" << prices[i] << "\n";
        }
    }

   
    void generateReceipt() {
        int index, quantity;
        double total = 0.0;
        double cost;
        
        if (count == 0) {
            cout << "No items in the shop \n";
            return;
        }
        
        cout << "Enter item number to purchase (1 to " << count << "): ";
        cin >> index;
        index--; 

        if (index >= 0 && index < count) {
            cout << "Enter quantity: ";
            cin >> quantity;
            cost = prices[index] * quantity;
            cout << "\n Receipt: \n";
            cout << items[index] << " x " << quantity << " >> $" << cost << "\n";
            cout << "-------------------\n";
            cout << "Total: $" << cost << "\n";
            cout << "-------------------\n";
        } else {
            cout << "Invalid item number.\n";
        }
    }
};

int main() {
    StationeryShop shop;
    int choice;

    do {
         cout << "\nWelcome to Asad's Stationary Shop\n";
        cout << "Menu:\n";
        cout << "1. Add Item\n";
        cout << "2. View Items\n";
        cout << "3. Generate Receipt\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string item;
                double price;
                cout << "Enter item name: ";
                cin >> item;
                cout << "Enter item price: ";
                cin >> price;
                shop.addItem(item, price);
                break;
            }
            case 2:
                shop.viewItems();
                break;
            case 3:
                shop.generateReceipt();
                break;
            case 4:
                cout << "Thankyou for Visiting\n";
                break;
            default:
                cout << "Wrong choice\n";
        }
    } while (choice != 4);

    return 0;
}