
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char rev[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }

    rev[len] = '\0';

    cout << "Reversed string: " << rev << endl;

    if (strcmp(str, rev) == 0) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
