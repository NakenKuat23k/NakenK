#include <iostream>
using namespace std;

bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    int daysInMonth[] = {
        31, isLeap(year) ? 29 : 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    day++;
    if (day > daysInMonth[month - 1]) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    cout << day << " " << month << " " << year;
    return 0;
}