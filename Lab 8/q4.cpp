#include <iostream>
using namespace std;

class TrafficSystem {
public:
    int carCount, delay;

    TrafficSystem(int carCount = 0, int delay = 0) {
        this->carCount = carCount;
        this->delay = delay;
    }

    TrafficSystem operator+(int cars) {
        return TrafficSystem(carCount + cars, delay);
    }

    TrafficSystem operator-(int cars) {
        int c = carCount - cars;
        if (c < 0) c = 0;
        return TrafficSystem(c, delay);
    }

    TrafficSystem operator*(int factor) {
        return TrafficSystem(carCount, delay * factor);
    }

    bool operator==(const TrafficSystem& other) {
        return carCount == other.carCount && delay == other.delay;
    }

    void show() {
        cout << "Cars: " << carCount << ", Delay: " << delay << " min" << endl;
    }
};

int main() {
    TrafficSystem a(50, 5);
    TrafficSystem b = a + 20;
    TrafficSystem c = b - 15;
    TrafficSystem d = c * 2;

    TrafficSystem e(100, 10), f(100, 10);

    cout << "A: "; a.show();
    cout << "B: "; b.show();
    cout << "C: "; c.show();
    cout << "D: "; d.show();

    cout << "E: "; e.show();
    cout << "F: "; f.show();

    cout << "E == F? " << (e == f ? "Yes" : "No") << endl;

    return 0;
}
