#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "нет";
        return 0;
    }

    int f1 = 1, f2 = 1;

    if (n == 1) {
        cout << "да";
        return 0;
    }

    int f = f1 + f2;
    while (f < n) {
        f1 = f2;
        f2 = f;
        f = f1 + f2;
    }

    cout << (f == n ? "да" : "нет");
    return 0;
}