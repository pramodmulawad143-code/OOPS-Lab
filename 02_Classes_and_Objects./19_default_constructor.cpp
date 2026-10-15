
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    Student() {
        rollNo = 312;
        marks = 85.5f;

        cout << "Default constructor called." << endl;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.display();

    return 0;
}
