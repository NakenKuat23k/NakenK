#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int x = i, sum = 0;

        while (x > 0) {
            int d = x % 10;
            sum += d * d * d;
            x /= 10;
        }

        if (sum == i)
            cout << i << " ";
    }

    return 0;
}