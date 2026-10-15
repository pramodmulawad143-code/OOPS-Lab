
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    int marks;

public:
    void getDetails();
    void displayDetails();
};

void Student::getDetails() {
    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter marks: ";
    cin >> marks;
}

void Student::displayDetails() {
    cout << "Roll Number: " << rollNo << endl;
    cout << "Marks: " << marks << endl;
}

int main() {
    Student s1;

    s1.getDetails();
    s1.displayDetails();

    return 0;
}
