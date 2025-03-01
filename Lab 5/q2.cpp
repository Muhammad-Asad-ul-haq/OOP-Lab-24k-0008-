#include <iostream>
#include <string>
using namespace std;

class Battery {
private:
    int capacity;

public:
    Battery(int capacity)  {
        this->capacity = capacity;
    }

    int getCapacity() const {
        return capacity;
    }

    void getDetails() const {
        cout << "Battery: " << capacity << "mAh";
    }
};

class Smartphone {
private:
    string name;
    const Battery& battery;

public:
    Smartphone(string name, const Battery& battery) 
        : name(name), battery(battery) {} 

    void showDetails() const {
        cout << "Smartphone: " << name << endl;
        battery.getDetails();
    }
};

int main() {
    Battery battery(4700);
    Smartphone phone("Redmi Note 9", battery);

    phone.showDetails();

    return 0;
}