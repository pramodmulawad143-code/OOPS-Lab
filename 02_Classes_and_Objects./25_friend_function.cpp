
#include <iostream>
using namespace std;

class Sample {
private:
    int number;

public:
    Sample() {
        number = 10;
    }

    friend void display(Sample s);
};

void display(Sample s) {
    cout << "Number: " << s.number << endl;
}

int main() {
    Sample obj;
    display(obj);

    return 0;
}
