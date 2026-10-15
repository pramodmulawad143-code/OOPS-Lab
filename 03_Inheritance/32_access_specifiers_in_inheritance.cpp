
#include <iostream>
using namespace std;

class Base {
public:
    int publicData;

protected:
    int protectedData;

private:
    int privateData;

public:
    Base() {
        publicData = 10;
        protectedData = 20;
        privateData = 30;
    }

    void displayPrivate() {
        cout << "Private data: " << privateData << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Public data: " << publicData << endl;
        cout << "Protected data: " << protectedData << endl;
    }
};

int main() {
    Derived obj;

    obj.display();
    obj.displayPrivate();

    return 0;
}
