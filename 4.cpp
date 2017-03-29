#include <iostream>
#include "math.h"

using namespace std;

int main4() {
    int iloscLiczb;
    cout << "Podaj liczbe z przedzialu <1; 1000>" << endl;
    cin >> iloscLiczb;

    if (iloscLiczb < 1 || iloscLiczb > 1000) {
        cout << "Nie podales liczby z przedzialu <0; 1000>";
        return 1;
    }

    int aktualna, najwieksza = (int) -(pow(10, 11));

    cout << "Podaj liczby z przedzialu <-10^9; 10^9>" << endl;
    for (int i = 0; i < iloscLiczb; ++i) {
        cin >> aktualna;
        if (aktualna < -pow(10, 9) || aktualna > pow(10, 9)) {
            cout << "Nie podales liczby z przedzialu <-10^9; 10^9>";
            return 1;
        }
        if (aktualna > najwieksza) {
            najwieksza = aktualna;
        }
        cout << najwieksza;
    }

    return 0;
}