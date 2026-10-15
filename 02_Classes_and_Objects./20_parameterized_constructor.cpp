
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    Student(int r, float m) {
        rollNo = r;
        marks = m;

        cout << "Parameterized constructor called." << endl;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(312, 85.5f);
    Student s2(313, 90.0f);

    cout << "\nStudent 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    return 0;
}
