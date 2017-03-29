#include <iostream>

using namespace std;

int main() {
    int n = 8, pomocnicza, wierszOdKonca, iloscZnakowX;
    char tablica[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            tablica[i][j] = '.';
        }
    }

    if (n % 2 != 0) {
        iloscZnakowX = 1;
        pomocnicza = n / 2;
        for (int k = 0; k < n / 2; ++k) {
            for (int i = pomocnicza; i < iloscZnakowX + pomocnicza; ++i) {
                tablica[k][i] = 'X';
            }
            iloscZnakowX += 2;
            pomocnicza--;
        }

        for (int l = 0; l < n; ++l) {
            tablica[n / 2][l] = 'X';
        }
        pomocnicza = n / 2;
        iloscZnakowX = 1;
        wierszOdKonca = n - 1;

        for (int k = n / 2; k > 0; --k) {
            for (int i = pomocnicza; i < iloscZnakowX + pomocnicza; ++i) {
                tablica[wierszOdKonca][i] = 'X';
            }
            iloscZnakowX += 2;
            pomocnicza--;
            wierszOdKonca--;
        }
    } else {
        iloscZnakowX = 2;
        pomocnicza = n / 2 - 1;
        for (int k = 0; k < n / 2; ++k) {
            for (int i = pomocnicza; i < iloscZnakowX + pomocnicza; ++i) {
                tablica[k][i] = 'X';
            }
            iloscZnakowX += 2;
            pomocnicza--;
        }

        for (int l = 0; l < n; ++l) {
            for (int i = 0; i < 2; ++i) {
                tablica[(n / 2) - i][l] = 'X';

            }
        }

        iloscZnakowX = 2;
        pomocnicza = n / 2 - 1;
        wierszOdKonca = n - 1;

        for (int k = n / 2; k > 0; --k) {
            for (int i = pomocnicza; i < iloscZnakowX + pomocnicza; ++i) {
                tablica[wierszOdKonca][i] = 'X';
            }
            iloscZnakowX += 2;
            pomocnicza--;
            wierszOdKonca--;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << tablica[i][j];
        }
        cout << endl;
    }
}
