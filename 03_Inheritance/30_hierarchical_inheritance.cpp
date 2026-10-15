
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "This is the Base class." << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "This is the Derived class B." << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "This is the Derived class C." << endl;
    }
};

int main() {
    B obj1;
    C obj2;

    obj1.display();
    obj1.showB();

    obj2.display();
    obj2.showC();

    return 0;
}
