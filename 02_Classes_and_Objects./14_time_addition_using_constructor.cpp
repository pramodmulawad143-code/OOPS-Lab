
#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void display() {
        cout << setfill('0')
             << setw(2) << hours << ":"
             << setw(2) << minutes << ":"
             << setw(2) << seconds << endl;
    }

    Time add(Time t) {
        Time result;

        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes
                       + result.seconds / 60;
        result.seconds %= 60;

        result.hours = hours + t.hours
                     + result.minutes / 60;
        result.minutes %= 60;
        result.hours %= 24;

        return result;
    }
};

int main() {
    Time t1(12, 34, 56);
    Time t2(10, 35, 14);

    cout << "First time: ";
    t1.display();

    cout << "Second time: ";
    t2.display();

    Time sum = t1.add(t2);

    cout << "Sum of times: ";
    sum.display();

    return 0;
}
