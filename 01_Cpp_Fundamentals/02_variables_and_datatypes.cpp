
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 20;
    float marks = 85.5f;
    double percentage = 89.75;
    char grade = 'A';
    string name = "Pramod";
    bool passed = true;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << boolalpha << passed << endl;

    return 0;
}
