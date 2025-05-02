#include <iostream>
#include <fstream>

using namespace std;

struct Student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    ofstream outFile("students.data", ios::binary);

    if (!outFile) {
        cout << "Error opening file for writing.\n";
        return 1;
    }

    int num;
    cout << "Enter the number of students: ";
    cin >> num;
    cin.ignore();

    for (int i = 0; i < num; ++i) {
        Student student;

        cout << "Enter name of student " << i + 1 << ": ";
        cin.getline(student.name, 35);
        cout << "Enter ID of student " << i + 1 << ": ";
        cin >> student.id;
        cout << "Enter GPA of student " << i + 1 << ": ";
        cin >> student.gpa;
        cin.ignore();

        outFile.write(reinterpret_cast<char*>(&student), sizeof(student));
    }

    outFile.close();

    ifstream inFile("students.data", ios::binary);

    if (!inFile) {
        cout << "Error opening file for reading.\n";
        return 1;
    }

    Student student;
    cout << "\nStudent records read from file:\n";
    while (inFile.read(reinterpret_cast<char*>(&student), sizeof(student))) {
        cout << "Name: " << student.name << ", ID: " << student.id << ", GPA: " << student.gpa << endl;
    }

    inFile.close();

    return 0;
}
