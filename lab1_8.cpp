#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 100 >= 11 && n % 100 <= 14)
        cout << n << " рублей";
    else if (n % 10 == 1)
        cout << n << " рубль";
    else if (n % 10 >= 2 && n % 10 <= 4)
        cout << n << " рубля";
    else
        cout << n << " рублей";

    return 0;
}