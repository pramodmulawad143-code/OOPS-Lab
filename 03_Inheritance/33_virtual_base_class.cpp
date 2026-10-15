
#include <iostream>
using namespace std;

class A {
public:
    int x;

    A() {
        x = 10;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
public:
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    D obj;
    obj.display();

    return 0;
}
