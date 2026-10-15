
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    void display() {
        cout << real;

        if (imaginary >= 0)
            cout << " + " << imaginary << "i";
        else
            cout << " - " << -imaginary << "i";

        cout << endl;
    }

    Complex add(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;

        return result;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    Complex sum = c1.add(c2);

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
