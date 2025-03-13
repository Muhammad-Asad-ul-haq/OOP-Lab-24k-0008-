#include <iostream>
#include <string>
using namespace std;

// Base class: Vehicle
class Vehicle {
public:
    string make;
    string model;
    int year;

public:
    
    Vehicle(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }

  
    void displayVehicle() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};


class Car : public Vehicle {
public:
    int doors;
    float fuel; 


  
    Car(string make, string model, int year, int doors, float fuel) : Vehicle(make, model, year) {
        this->doors = doors;
        this->fuel = fuel;
    }

    
    void displayCar() {
        Vehicle::displayVehicle(); 
        cout << "Doors: " << doors << endl;
        cout << "Fuel Efficiency: " << fuel << " Liters" << endl;
    }
};


class ElectricCar : public Car {
public:
    int batteryLife; 
    
    ElectricCar(string make, string model, int year, int doors, float fuel, int batteryLife) : Car(make, model, year, doors, fuel) {
        this->batteryLife = batteryLife;
    }

    
    void displayElectricCar() {
        Car::displayCar(); 
        cout << "Battery Life: " << batteryLife << " Km" << endl;
    }
};

int main() {
    
    ElectricCar Audi("Etron GT", "Sports", 2021, 4, 120.0, 450);

   
    Audi.displayElectricCar();

    return 0;
}
