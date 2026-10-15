
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
        cout << "----------------" << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(10, 4);

    cout << "Default constructor:" << endl;
    r1.display();

    cout << "Single-parameter constructor:" << endl;
    r2.display();

    cout << "Two-parameter constructor:" << endl;
    r3.display();

    return 0;
}
