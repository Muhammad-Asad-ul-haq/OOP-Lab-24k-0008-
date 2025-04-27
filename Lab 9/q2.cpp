#include <iostream>
using namespace std;

class SmartDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void getStatus() = 0;
    virtual ~SmartDevice() {}
};

class LightBulb : public SmartDevice {
private:
    bool isOn;
    int brightness;

public:
    LightBulb(){
        this->isOn=false;
        this->brightness=0;
    }

    void turnOn() override {
        isOn = true;
        brightness = 100;
    }

    void turnOff() override {
        isOn = false;
        brightness = 0;
    }

    void getStatus() override {
        cout << "LightBulb is " << (isOn ? "On" : "Off") << " and the Brightness is " << brightness << " Percent" << endl;
    }
};

class Thermostat : public SmartDevice {
private:
    bool isOn;
    double temperature;

public:
    Thermostat(){
        this->isOn=false;
        this->temperature=20.0;}

    void turnOn() override {
        isOn = true;
        temperature = 22.5;
    }

    void turnOff() override {
        isOn = false;
        temperature = 0.0;
    }

    void getStatus() override {
        if (isOn){
            cout << "Thermostat is On and the Temperature is " << temperature << "°C" << endl;}
        else{
            cout << "Thermostat is Off" << endl;}
    }
};

int main() {
    LightBulb b;
    Thermostat t;
    
    cout<<"When both are on: "<<endl;
    
    b.turnOn();
    t.turnOn();

    b.getStatus();
    t.getStatus();
    
    cout<<"When both are off: "<<endl;
    
    b.turnOff();
    t.turnOff();

    b.getStatus();
    t.getStatus();

    return 0;
}
