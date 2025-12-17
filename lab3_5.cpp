#include <iostream>
using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;

    double result = 1;
    for (int i = 0; i < n; i++)
        result *= x;

    cout << result;
    return 0;
}