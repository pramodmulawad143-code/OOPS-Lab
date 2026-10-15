
#include <iostream>
using namespace std;

void changeValue(int &x) {
    x = 100;
    cout << "Value inside function: " << x << endl;
}

int main() {
    int num = 10;

    cout << "Value before function call: " << num << endl;

    changeValue(num);

    cout << "Value after function call: " << num << endl;

    return 0;
}
