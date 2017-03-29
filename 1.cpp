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










/*for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - 1) / 2; ++j) {
            cout << ".";
        }
        for (int k = 0; k <= i; ++k) {
            cout << "X";
        }
        for (int j = 0; j < (n - 1) / 2; ++j) {
            cout << ".";
        }
        cout << endl;
    }*//*

    */
/*int n = 5;
    for (int j = 0; j < 5; ++j) {
        for (int k = 0; k < n - 1; ++k) {
            cout << ".";
        }
        for (int i = 0; i <= j; ++i) {
            cout << "X";
        }
        cout << endl;
    }*//*


*/
/*    int n = 5;

    for (int i = 0; i < 5; ++i) {
        for (int k = 0; k < n / 2; ++k) {
            cout << ".";
        }
        for (int j = 0; j <= i; ++j) {
            cout << "X";
        }
        for (int k = 0; k < n / 2; ++k) {
            cout << ".";
        }
        cout << endl;
    }*//*

}*/

/*
using namespace std;

int main2() {
    */
/*int n = 3;

    for (int i = 1; i < 3; i++) {
        for (int j = i; j <= n / 2; j++) {
            cout << ".";
        }
        for (int k = 1; k <= (i * (n / 2)); k++) {
            cout << "X";
        }
        for (int j = i; j <= n / 2; j++) {
            cout << ".";
        }
        cout << endl;
    }

    for (int l = 0; l < n; ++l) {
        cout << "X";
    }
    cout << endl;*//*



    */
/*for (int i = 2; i > 1 - 1; i--) {
        for (int j = i; j < 3; j++) {
            cout << ".";
        }
        for (int k = 1; k < (i * 2); k++) {
            cout << "X";
        }
        for (int j = i; j < 3; j++) {
            cout << ".";
        }
        cout << endl;
    }*//*

}*/
