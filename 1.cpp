#include <iostream>

using namespace std;

int main() {
    int n = 8;
    char array[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = '.';
        }
    }

    if (n % 2 != 0) {
        int dupa = 1;
        int foo = n / 2;
        for (int k = 0; k < n / 2; ++k) {
            for (int i = foo; i < dupa + foo; ++i) {
                array[k][i] = 'X';
            }
            dupa += 2;
            foo--;
        }

        for (int l = 0; l < n; ++l) {
            array[n / 2][l] = 'X';
        }
        foo = n / 2;
        dupa = 1;
        int dd = n - 1;

        for (int k = n / 2; k > 0; --k) {
            for (int i = foo; i < dupa + foo; ++i) {
                array[dd][i] = 'X';
            }
            dupa += 2;
            foo--;
            dd--;
        }
    } else {
        int dupa = 2;
        int foo = n / 2 - 1;
        for (int k = 0; k < n / 2; ++k) {
            for (int i = foo; i < dupa + foo; ++i) {
                array[k][i] = 'X';
            }
            dupa += 2;
            foo--;
        }

        for (int l = 0; l < n; ++l) {
            for (int i = 0; i < 2; ++i) {
                array[(n / 2) - i][l] = 'X';

            }
        }

        dupa = 2;
        foo = n / 2 - 1;
        int dd = n - 1;

        for (int k = n / 2; k > 0; --k) {
            for (int i = foo; i < dupa + foo; ++i) {
                array[dd][i] = 'X';
            }
            dupa += 2;
            foo--;
            dd--;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << array[i][j];
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

#include<iostream>

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
