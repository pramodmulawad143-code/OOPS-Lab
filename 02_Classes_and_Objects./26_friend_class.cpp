
#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student() {
        marks = 85;
    }

    friend class Result;
};

class Result {
public:
    void display(Student s) {
        cout << "Student marks: " << s.marks << endl;
    }
};

int main() {
    Student s;
    Result r;

    r.display(s);

    return 0;
}
