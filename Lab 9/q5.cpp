#include <iostream>
using namespace std;

class Activity {
public:
    virtual double calculateCaloriesBurned() = 0;
    virtual ~Activity() {}
};

class Running : public Activity {
private:
    double distance;
    double time;

public:
    Running(double distance, double time){
        this->distance=distance;
        this->time=time;
    }

    double calculateCaloriesBurned() override {
        return distance * 0.63; 
    }
};

class Cycling : public Activity {
private:
    double speed;
    double time;

public:
    Cycling(double speed, double time){
        this->speed=speed;
        this->time=time;
    }

    double calculateCaloriesBurned() override {
        return speed * time * 0.5; 
    }
};

int main() {
    Running r(7.5,45.0);
    Cycling c(25.0, 2.5);

    cout << "Calories burned while running: " << r.calculateCaloriesBurned() << " kcal" << endl;
    cout << "Calories burned while cycling: " << c.calculateCaloriesBurned() << " kcal" << endl;

    return 0;
}
