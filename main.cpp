/*
}*/

/*#include <iostream>
#include "math.h"

using namespace std; // 3

int main() {
    unsigned long long liczba;
    cin >> liczba;

    if (liczba < 0 || liczba > pow(10, 18)) {
        cout << "Liczba ze zlego zakresu";
        return 0;
    }

    while (liczba) {
        if (liczba % 10 != 4 && liczba % 10 != 7) {
            cout << "NIE";
            return 0;
        }
        liczba /= 10;
    }
    cout << "TAK";

    return 0;
}*/

/*

#include <iostream>
#include "math.h"

using namespace std; // 4

int main() {
    int number;
    cin >> number;

    if(number < 1 || number > 1000) {
    cout << "Przedzial <1;1000>";
    return 0;
    }

    int aktualna = 0;

    int max = 0;

    for (int i = 0; i < number; ++i) {
        cin >> aktualna;
        if (aktualna < -pow(10, 9) || aktualna > pow(10, 9)) {
            cout << "Zla liczba";
            return 0;
        }
        if (aktualna > max) {
            max = aktualna;
        }
        cout << max;
    }

    return 0;
}*/

/*

#include <iostream>

using namespace std; // 5

int main() {
    int liczba;
    cin >> liczba;

    if (liczba < 1 || liczba > 1000) {
        cout << "Przedzial <1;1000>";
        return 0;
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

    cout << "Suma: " << iloscLiczbPierwszych;

    return 0;
}*/

/*
#include <iostream>

using namespace std; // 6

int main() {
    int liczba, silnia = 1;
    cin >> liczba;

    if (liczba < 0 || liczba > 1000000000) {
        cout << "Przedzial <0;1000 000 000>";
        return 0;
    }


    for (int i = 1; i <= liczba; ++i) {
        silnia *= i;
    }

    cout << silnia % 10000;

    return 0;
}*/

#include <iostream>
#include <math.h>

using namespace std; // 7

int d() {
/*    int N = 5;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < N - i; j++)
            cout << ".";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "X";
        for (int j = 0; j < N - i; j++)
            cout << ".";
        cout << endl;
    }*/
    int n = 7;
    string dupa;
    for (int l = 0; l < n; ++l) {
        dupa += ".";
    }
    unsigned int dd = 1;
    for (int i = 0; i < n / 2; ++i) {
        dupa.replace((unsigned int) (3 - i), 5, "X");
        dd = dd + 2;
        cout << dupa << endl;
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
    }*/
    /*int n = 5;
    for (int j = 0; j < 5; ++j) {
        for (int k = 0; k < n - 1; ++k) {
            cout << ".";
        }
        for (int i = 0; i <= j; ++i) {
            cout << "X";
        }
        cout << endl;
    }*/

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
    }*/
}