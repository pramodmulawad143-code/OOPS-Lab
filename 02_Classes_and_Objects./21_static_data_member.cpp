
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    static int count;

public:
    Student(int r) {
        rollNo = r;
        count++;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Total objects created: " << count << endl;
    }

    static void showCount() {
        cout << "Total number of students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1(312);
    Student s2(313);
    Student s3(314);

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}
