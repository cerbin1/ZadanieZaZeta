#include <iostream>

using namespace std;

int main() {
    int iloscLiczb;
    cin >> iloscLiczb;

    if (iloscLiczb < 1 || iloscLiczb > 50000) {
        return 1;
    }

    int liczby[iloscLiczb];
    for (int i = 0; i < iloscLiczb; ++i) {
        cin >> liczby[i];
        if (liczby[i] < 1 || liczby[i] > 20000) {
            return 1;
        }
    }

    int  ciagSum[iloscLiczb];
    for (int i = 0; i < iloscLiczb; ++i) {
        int suma = 0;
        for (int j = 0; j <= i; ++j) {
            suma += liczby[j];
        }
        ciagSum[i] = suma;
    }

    for (int i = 0; i < iloscLiczb; ++i) {
        cout << ciagSum[i] << " ";
    }

    return 0;
}
