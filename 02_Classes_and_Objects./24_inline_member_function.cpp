
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    inline int calculateArea() {
        return length * breadth;
    }

    void display() {
        cout << "Area of rectangle: "
             << calculateArea() << endl;
    }
};

int main() {
    Rectangle r;

    r.getData();
    r.display();

    return 0;
}
