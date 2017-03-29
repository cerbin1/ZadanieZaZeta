#include <iostream>

using namespace std;

int main6() {
    long long int liczba, silnia = 1;
    cout << "Podaj liczbe z przedzialu <0; 1 000 000 000>" << endl;
    cin >> liczba;

    if (liczba < 0 || liczba > 1000000000) {
        cout << "Niepoprawna liczba. Przedzial <0; 1 000 000 000>";
        return 1;
    }


    for (int i = 1; i <= liczba; ++i) {
        silnia *= i;
    }

    cout << silnia % 10000;

    return 0;
}