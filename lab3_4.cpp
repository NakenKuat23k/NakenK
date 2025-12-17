#include <iostream>
using namespace std;

int sumDiv(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int j = sumDiv(i);
        if (j > i && j <= b && sumDiv(j) == i) {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}