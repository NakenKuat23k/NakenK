#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;

    double y = 1;
    for (int i = 2; i <= 11; i++) {
        y = y * x + i;
    }

    cout << y;
    return 0;
}