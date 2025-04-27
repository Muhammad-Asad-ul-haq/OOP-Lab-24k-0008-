#include <iostream>
using namespace std;

class Vehicle {
protected:
    string model;
    double rate;

public:
    Vehicle(string model, double rate) {
        this->model=model;
        this->rate=rate;
         }
         
    virtual double getDailyRate() const = 0;
    virtual void displayDetails() const = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    Car(string model, double rate) : Vehicle(model, rate) {}

    double getDailyRate() const override {
        return rate;
    }

    void displayDetails() const override {
        cout << "Car Model = " << model <<endl<< "Daily Rate = " << getDailyRate() << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike(string model, double rate) : Vehicle(model, rate) {}

    double getDailyRate() const override {
        return rate;
    }

    void displayDetails() const override {
        cout << "Bike Model=  " << model <<endl<< "Daily Rate= " << getDailyRate() << endl;
    }
};

int main() {
    Vehicle* v[2];
    v[0] = new Car("Mazda RX8", 32.0);
    v[1] = new Bike("Suzuki Hayabhusa", 52.0);

    for (int i = 0; i < 2; ++i) {
        v[i]->displayDetails();
    }

    for (int i = 0; i < 2; ++i) {
        delete v[i];
    }

    return 0;
}
