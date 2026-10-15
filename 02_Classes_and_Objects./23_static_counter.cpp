
#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
    }

    void displayCount() {
        cout << "Number of objects created: "
             << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1;
    c1.displayCount();

    Counter c2;
    c2.displayCount();

    Counter c3;
    c3.displayCount();

    return 0;
}
