#include <iostream>
using namespace std;

class Learner;

class Instructor {
public:
    void changeMark(Learner& l, int pos, int value);
};

class Learner {
    string fullName;
    int marks[3];

public:
    Learner(string n, int m1, int m2, int m3) {
        fullName = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void show() {
        cout << "Learner: " << fullName << "\nMarks: ";
        for (int i = 0; i < 3; i++)
            cout << marks[i] << " ";
        cout << endl;
    }

    friend class Instructor;
    friend float findAverage(Learner l);
};

void Instructor::changeMark(Learner& l, int pos, int value) {
    if (pos >= 0 && pos < 3)
        l.marks[pos] = value;
}

float findAverage(Learner l) {
    int total = 0;
    for (int i = 0; i < 3; i++)
        total += l.marks[i];
    return total / 3.0;
}

int main() {
    Learner l("Talha", 52, 78, 85);
    Instructor i;

    cout << "Before change:\n";
    l.show();
    cout << "Average: " << findAverage(l) << endl;

    i.changeMark(l, 2, 92);

    cout << "\nAfter change:\n";
    l.show();
    cout << "Average: " << findAverage(l) << endl;

    return 0;
}
