
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
    }

    Student(const Student &s) {
        rollNo = s.rollNo;
        marks = s.marks;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(312, 85.5f);

    cout << "Original object:" << endl;
    s1.display();

    Student s2(s1);

    cout << "\nCopied object:" << endl;
    s2.display();

    return 0;
}
