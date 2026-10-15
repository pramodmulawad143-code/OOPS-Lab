
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    int semester;

    void getDetails() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter semester: ";
        cin >> semester;
    }

    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    Student s1;

    s1.getDetails();
    s1.displayDetails();

    return 0;
}
