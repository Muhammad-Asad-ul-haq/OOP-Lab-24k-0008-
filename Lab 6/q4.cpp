#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(const string& name, int age) {
        this->name = name;
        this->age = age;
    }

    void display(){
        cout << "Name: " << name <<endl<< "Age: " << age << "\n";
    }
};

class Student : public Person {
public:
    int studentID;
    string gradeLevel;

    Student(const string& name, int age, int studentID, const string& gradeLevel)
        : Person(name, age) {
        this->studentID = studentID;
        this->gradeLevel = gradeLevel;
    }

    void display() {
        Person::display();
        cout << "Student ID: " << studentID << "\nGrade Level: " << gradeLevel << "\n";
    }
};

class Teacher : public Person {
public:
    string subject;
    int roomNumber;

    Teacher(const string& name, int age, const string& subject, int roomNumber)
        : Person(name, age) {
        this->subject = subject;
        this->roomNumber = roomNumber;
    }

    void display() {
        Person::display();
        cout << "Subject: " << subject << ", Room Number: " << roomNumber << "\n";
    }
};

class GraduateStudent {
public:
    Student student;
    Teacher teacher;

    GraduateStudent(const string& name, int age, int studentID, const string& gradeLevel,
                    const string& subject, int roomNumber)
        : student(name, age, studentID, gradeLevel),
          teacher(name, age, subject, roomNumber) {}

    void display(){
        student.display();
        cout << "Teaching Subject: " << teacher.subject << ", Teaching Room: " << teacher.roomNumber << "\n";
    }
};

int main() {
    GraduateStudent grad("Sane", 29, 1010, "Masters", "Fifa Licence", 75);

    cout << "Graduate Student Details:\n";
    grad.display();

    return 0;
}
