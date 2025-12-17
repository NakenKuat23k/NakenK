#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        long long prod = 1;
        for (int j = i; j <= 2 * i; j++) {
            prod *= j;
        }
        sum += prod;
    }

    cout << sum;
    return 0;
}