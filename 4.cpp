#include <iostream>
#include "math.h"

using namespace std;

int main() {
    int iloscLiczb;
    cin >> iloscLiczb;

    if (iloscLiczb < 1 || iloscLiczb > 1000) {
        return 1;
    }

    long long aktualna, najwieksza = (long long) -(pow(10, 12));

    for (int i = 0; i < iloscLiczb; ++i) {
        cin >> aktualna;
        if (aktualna < -pow(10, 9) || aktualna > pow(10, 9)) {
            return 1;
        }
        if (aktualna > najwieksza) {
            najwieksza = aktualna;
        }
        cout << najwieksza << endl;
    }

    return 0;
}