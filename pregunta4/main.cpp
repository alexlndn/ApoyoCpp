#include <iostream>

using namespace std;
const int NMAX=100;

void extraeFila(int[NMAX][NMAX], int, int, int[NMAX]);

int main() {
    int mat[NMAX][NMAX];

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            cin >> mat[i][j];
        }
    }

    int fila[NMAX];
    extraeFila(mat, 3, 1, fila);

    for(int i = 0; i < 3 ; i++) {
        cout << fila[i] << " ";
    }

    return 0;
}

void extraeFila(int matriz[NMAX][NMAX], int Nodos, int f, int fila[NMAX]) {
    for(int i = 0 ; i < Nodos ; i++) {
        fila[i] = matriz[f][i];
    }
    return;
}
