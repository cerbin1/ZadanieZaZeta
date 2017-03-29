#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe z przedzialu <3; 80>" << endl;
    cin >> n;

    if (n < 3 || n > 80) {
        cout << "Nie podales liczby z przedzialu <3; 80>";
        return 1;
    }

    int pomocnicza, wierszOdKonca, iloscZnakowX;

    char amulet[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            amulet[i][j] = '.';
        }
    }

//    if (n % 2 != 0) {
        iloscZnakowX = 1;
        pomocnicza = n / 2;
        for (int k = 0; k < n / 2; ++k) {
            for (int i = pomocnicza; i < iloscZnakowX + pomocnicza; ++i) {
                amulet[k][i] = 'X';
            }
            iloscZnakowX += 2;
            pomocnicza--;
        }

        for (int l = 0; l < n; ++l) {
            amulet[n / 2][l] = 'X';
        }
        pomocnicza = n / 2;
        iloscZnakowX = 1;
        wierszOdKonca = n - 1;

        for (int k = n / 2; k > 0; --k) {
            for (int i = pomocnicza; i < iloscZnakowX + pomocnicza; ++i) {
                amulet[wierszOdKonca][i] = 'X';
            }
            iloscZnakowX += 2;
            pomocnicza--;
            wierszOdKonca--;
        }
//    } else {
        iloscZnakowX = 2;
        pomocnicza = n / 2 - 1;
        for (int k = 0; k < n / 2; ++k) {
            for (int i = pomocnicza; i < iloscZnakowX + pomocnicza; ++i) {
                amulet[k][i] = 'X';
            }
            iloscZnakowX += 2;
            pomocnicza--;
        }

        for (int l = 0; l < n; ++l) {
            for (int i = 0; i < 2; ++i) {
                amulet[(n / 2) - i][l] = 'X';

            }
        }
        iloscZnakowX = n % 2 == 0 ? 1 : 2;

        iloscZnakowX = 2;
        pomocnicza = n / 2 - 1;
        wierszOdKonca = n - 1;

        for (int k = n / 2; k > 0; --k) {
            for (int i = pomocnicza; i < iloscZnakowX + pomocnicza; ++i) {
                amulet[wierszOdKonca][i] = 'X';
            }
            iloscZnakowX += 2;
            pomocnicza--;
            wierszOdKonca--;
        }
//    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << amulet[i][j];
        }
        cout << endl;
    }
}
