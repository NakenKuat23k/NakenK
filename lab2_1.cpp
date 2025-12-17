#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, digit;
    cin >> n >> digit;

    n = abs(n);

    if (n == 0 && digit == 0) {
        cout << "да";
        return 0;
    }

    bool found = false;
    while (n > 0) {
        if (n % 10 == digit) {
            found = true;
            break;
        }
        n /= 10;
    }

    cout << (found ? "да" : "нет");
    return 0;
}