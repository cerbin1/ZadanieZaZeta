#include <iostream>

using namespace std;

int main() {
    unsigned long long liczba, silnia = 1;
    cin >> liczba;

    if (liczba < 0 || liczba > 1000000000) {
        return 1;
    }

    for (int i = 1; i <= liczba; ++i) {
        silnia *= i;
    }

    cout << silnia % 10000;

    return 0;
}