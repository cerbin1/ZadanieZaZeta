#include <iostream>

using namespace std; // 2

int main() {
    int n;
    cout << "Podaj liczbe z przedzialu <0;50 000>" << endl;
    cin >> n;

    if (n < 1 || n > 50000) {
        cout << "Niepoprawna liczba";
        return 0;
    }

    int liczby[n];
    cout << "Podaj liczby z przedzialu <0;20 000>" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> liczby[i];
        if (liczby[i] < 1 || liczby[i] > 20000) {
            cout << "Niepoprawna liczba";
            return 0;
        }
    }

    int drugiCiag[n];

    for (int i = 0; i < n; ++i) {
        int suma = 0;
        for (int j = 0; j <= i; ++j) {
            suma += liczby[j];
        }
        drugiCiag[i] = suma;
    }


    for (int i = 0; i < n; ++i) {
        cout << drugiCiag[i] << " ";
    }

    return 0;
}