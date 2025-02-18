#include <iostream>
#include <string>

using namespace std;

class SmartDevice {
private:
    string name;
    string type;
    bool status;  // if true then on, else off

public:
    
    SmartDevice(string name, string type, bool status = false) {
        this->name = name;
        this->type = type;
        this->status = status;

        cout << name << " is Powered Off Initially\n" << endl;
    }

    
    void powerOn() {
        status = true;
        cout << name << " is now Powered On\n" << endl;
    }

    
    void powerOff() {
        status = false;
        cout << name << " is now Powered Off\n" << endl;
    }

    
    ~SmartDevice() {
        cout << name << " is finally Powering down after providing its honourable services\n" << endl;
    }
};

int main() {
   
    SmartDevice Phone("Samsung Galaxy S8+", "Smart Phone");
    SmartDevice HeadPhone("Hyper X Stinger", "Headphones");
    SmartDevice Refrigerator("Dawlance F4", "Smart Refrigerator");

   
    Phone.powerOn();
    Phone.powerOff();
     
    HeadPhone.powerOn();
    HeadPhone.powerOff();
    
    Refrigerator.powerOn();
    Refrigerator.powerOff();
   
    

    return 0;
}
