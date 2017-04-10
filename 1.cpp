#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 3 || n > 80) {
        return 1;
    }

    int wiersz, wierszOdKonca = n - 1, iloscZnakowX;

    int poczatkowaIloscZnakow, poczatkowaWartoscWiersza;

    char amulet[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            amulet[i][j] = '.';
        }
    }

    if (n % 2 == 0) {
        poczatkowaIloscZnakow = 2;
        poczatkowaWartoscWiersza = n / 2 - 1;
        for (int l = 0; l < n; ++l) {
            for (int i = 0; i < 2; ++i) {
                amulet[(n / 2) - i][l] = 'X';
            }
        }
    } else {
        poczatkowaIloscZnakow = 1;
        poczatkowaWartoscWiersza = n / 2;
        for (int l = 0; l < n; ++l) {
            amulet[n / 2][l] = 'X';
        }
    }

    iloscZnakowX = poczatkowaIloscZnakow;
    wiersz = poczatkowaWartoscWiersza;
    for (int k = 0; k < n / 2; ++k) {
        for (int i = wiersz; i < iloscZnakowX + wiersz; ++i) {
            amulet[k][i] = 'X';
        }
        iloscZnakowX += 2;
        wiersz--;
    }
    iloscZnakowX = poczatkowaIloscZnakow;
    wiersz = poczatkowaWartoscWiersza;

    for (int k = n / 2; k > 0; --k) {
        for (int i = wiersz; i < iloscZnakowX + wiersz; ++i) {
            amulet[wierszOdKonca][i] = 'X';
        }
        iloscZnakowX += 2;
        wiersz--;
        wierszOdKonca--;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << amulet[i][j];
        }
        cout << endl;
    }
    return 0;
}
