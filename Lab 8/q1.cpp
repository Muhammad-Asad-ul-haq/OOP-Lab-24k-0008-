#include <iostream>
using namespace std;


class Time;

class Speed {
private:
    float speedy;

public:
    
    Speed(float speedy) {
        this->speedy = speedy;
    }

   
    friend void calculateDistance(Speed s, Time t);
};

class Time {
private:
    float hours;

public:
    
    Time(float hours) {
        this->hours = hours;
    }

    
    friend void calculateDistance(Speed s, Time t);
};


void calculateDistance(Speed s, Time t) {
    float distance = s.speedy * t.hours;
    cout << "Total Distance Travelled = " << distance << " km" << endl;
}

int main() {
    
    Speed s1(60);     
    Time t1(2);        

    
    calculateDistance(s1, t1);

    return 0;
}
