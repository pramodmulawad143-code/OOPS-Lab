
#include <iostream>
using namespace std;

class Base {
private:
    int num;

public:
    Base() {
        num = 10;
    }

    int getNum() {
        return num;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Value of private member: " << getNum() << endl;
    }
};

int main() {
    Derived obj;
    obj.display();

    return 0;
}
