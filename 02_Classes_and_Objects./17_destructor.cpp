
#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called: Object created." << endl;
    }

    ~Student() {
        cout << "Destructor called: Object destroyed." << endl;
    }

    void display() {
        cout << "Student object is being used." << endl;
    }
};

int main() {
    Student s1;

    s1.display();

    return 0;
}
