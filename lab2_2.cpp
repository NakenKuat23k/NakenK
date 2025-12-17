#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int reversed = 0;
    int temp = abs(n);

    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    if (n < 0)
        reversed = -reversed;

    cout << reversed;
    return 0;
}