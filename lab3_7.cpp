#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 2) {
        cout << 1;
        return 0;
    }

    long long f1 = 1, f2 = 1, f;
    for (int i = 3; i <= n; i++) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }

    cout << f2;
    return 0;
}