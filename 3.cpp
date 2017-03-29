#include <iostream>
#include "math.h"

using namespace std;

int main3() {
    unsigned long long liczba;
    cin >> liczba;

    if (liczba < 0 || liczba > pow(10, 18)) {
        cout << "Liczba ze zlego zakresu";
        return 0;
    }

    while (liczba) {
        if (liczba % 10 != 4 && liczba % 10 != 7) {
            cout << "NIE";
            return 0;
        }
        liczba /= 10;
    }
    cout << "TAK";

    return 0;
}
