#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 999999; i++) {
        int x = i;
        int s1 = 0, s2 = 0;

        for (int j = 0; j < 3; j++) {
            s2 += x % 10;
            x /= 10;
        }
        for (int j = 0; j < 3; j++) {
            s1 += x % 10;
            x /= 10;
        }

        if (s1 == s2) {
            cout << i / 100000
                 << (i / 10000) % 10
                 << (i / 1000) % 10
                 << (i / 100) % 10
                 << (i / 10) % 10
                 << i % 10 << endl;
        }
    }

    return 0;
}