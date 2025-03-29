#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    int id;
    string address;
    string phone;
    string email;

public:
    string name;
    Person(string n, int i, string addr, string ph, string em)
        : name(n), id(i), address(addr), phone(ph), email(em) {}

    virtual void displayInfo() {
        cout << "Name: " << name << "\nID: " << id << "\nAddress: " << address
             << "\nPhone: " << phone << "\nEmail: " << email << endl;
    }

    virtual void updateInfo(string n, string addr, string ph, string em) {
        name = n;
        address = addr;
        phone = ph;
        email = em;
    }
};

class Student : public Person {
private:
    string courses[5];  
    int courseCount;
    double gpa;
    int year;

public:
    Student(string n, int i, string addr, string ph, string em, double g, int y)
        : Person(n, i, addr, ph, em), gpa(g), year(y), courseCount(0) {}

    void addCourse(string course) {
        if (courseCount < 5) {
            courses[courseCount] = course;
            courseCount++;
        }
    }

    void displayInfo() override {
        Person::displayInfo();
        cout << "Courses: ";
        for (int i = 0; i < courseCount; i++) {
            cout << courses[i] << " ";
        }
        cout << "\nGPA: " << gpa << "\nYear: " << year << endl;
    }
};

class Professor : public Person {
private:
    string department;
    string courses[5];  
    int courseCount;
    double salary;

public:
    Professor(string n, int i, string addr, string ph, string em, string dept, double sal)
        : Person(n, i, addr, ph, em), department(dept), salary(sal), courseCount(0) {}

    void addCourse(string course) {
        if (courseCount < 5) {
            courses[courseCount] = course;
            courseCount++;
        }
    }

    void displayInfo() override {
        Person::displayInfo();
        cout << "Department: " << department << "\nCourses: ";
        for (int i = 0; i < courseCount; i++) {
            cout << courses[i] << " ";
        }
        cout << "\nSalary: " << salary << endl;
    }
};

class Staff : public Person {
private:
    string department;
    string position;
    double salary;

public:
    Staff(string n, int i, string addr, string ph, string em, string dept, string pos, double sal)
        : Person(n, i, addr, ph, em), department(dept), position(pos), salary(sal) {}

    void displayInfo() override {
        Person::displayInfo();
        cout << "Department: " << department << "\nPosition: " << position << "\nSalary: " << salary << endl;
    }
};

class Course {
private:
    string courseId;
    string courseName;
    int credits;
    Professor& instructor;  
    string schedule;

public:
    Course(string id, string name, int c, Professor& prof, string sched)  
        : courseId(id), courseName(name), credits(c), instructor(prof), schedule(sched) {}

    void registerStudent(Student& student) {
        cout << "Student " << student.name << " has been registered for " << courseName << endl;
    }

    void calculateGrades() {
        cout << "Grades for course " << courseName << " are being calculated." << endl;
    }

    void displayCourseInfo() {
        cout << "Course ID: " << courseId << "\nCourse Name: " << courseName
             << "\nCredits: " << credits << "\nInstructor: " << instructor.name
             << "\nSchedule: " << schedule << endl;
    }
};

int main() {
    Professor p1("Sameer Faisal", 1313, "Dhoraji", "0317-3131313", "sameer@nu.edu.com", "OOP", 125000);
    
    p1.addCourse("CS782");
    p1.addCourse("CS783");
    
    Student s1("Asad", 108, "Nazimabad", "0321-00010121", "asad@nu.edu.com", 2.8, 2024);
    
    s1.addCourse("CS782");
    s1.addCourse("CS783");

    Staff s2("Khalid", 311, "Gulshan", "0321-3231331", "khalid@nu.edu.com", "Lab", "Lecturer", 42000);

   
    Course c1("CS782", "Object Oriented Programming", 3, p1, "E29 9:30 AM");

    cout << "\nStudent Info:\n";
    s1.displayInfo();

    cout << "\nProfessor Info:\n";
    p1.displayInfo(); 

    cout << "\nStaff Info:\n";
    s2.displayInfo();

    cout << "\nCourse Info:\n";
    c1.displayCourseInfo();

    c1.registerStudent(s1);
    c1.calculateGrades();

    return 0;
}
