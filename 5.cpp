#include <iostream>

using namespace std;

int main() {
    int liczba;
    cin >> liczba;

    if (liczba < 1 || liczba > 1000) {
        return 1;
    }

    bool czyJestPierwsza;
    int iloscLiczbPierwszych = 0;

    for (int i = 2; i < liczba; ++i) {
        czyJestPierwsza = true;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                czyJestPierwsza = false;
                break;
            }
        }
        if (czyJestPierwsza) {
            iloscLiczbPierwszych++;
        }
    }

    cout << iloscLiczbPierwszych;

    return 0;
}