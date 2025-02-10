#include <iostream>
#include <string>

using namespace std;

class BoardMarker {
    bool Refillable;
    bool Ink;

public:
    string Company;
    string Color;

    void setRefill(bool r) {
        Refillable = r;
    }

    void getRefill() {
        cout << Refillable << endl;
    }

    void setInk(bool i) {
        Ink = i;
    }

    void getInk() {
        cout << Ink << endl;
    }

    void write() {
        if (Ink) {
            cout << "You can Continue Writing" << endl;
        } else {
            cout << "Writing is not Possible" << endl;
        }
    }

    void refill() {
        if (Ink == false) {
            cout << "Ink is filled" << endl;
            Ink = true;
        } else {
            cout << "Ink already filled" << endl;
        }
    }
};

int main() {
    BoardMarker b1;
    BoardMarker b2;
    BoardMarker b3;

    b1.setRefill(true);
    b1.getRefill();
    b1.setInk(false);
    b1.getInk();

    b1.write();
    b1.refill();
    b1.write();

    b2.setRefill(false);
    b2.getRefill();
    b2.setInk(false);
    b2.getInk();
   
    b2.write();
    b2.refill();

    b3.setRefill(true);
    b3.getRefill();
    b3.setInk(true);
    b3.getInk();
   
    b3.write();

    return 0;
}