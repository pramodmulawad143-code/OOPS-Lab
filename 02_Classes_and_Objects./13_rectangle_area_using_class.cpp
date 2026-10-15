
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    void getDimensions() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float calculateArea() {
        return length * breadth;
    }

    void displayArea() {
        cout << "Area of rectangle = " << calculateArea() << endl;
    }
};

int main() {
    Rectangle r1;

    r1.getDimensions();
    r1.displayArea();

    return 0;
}
