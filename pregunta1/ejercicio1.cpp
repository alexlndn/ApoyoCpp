#include <iostream>
using namespace std;

const int NMAX = 10;
const int MMAX = 100;

int enteroValidado();
void llenarMatriz(double[MMAX][MMAX], int);
void extraeDiagonal(double[3][3], int, double[NMAX]);
void matrizTriangular(double[3][3], double[3][3], int);
void diagonalInversa(double[3][3], int, double[3]);


int main() {
    // enteroValidado();
    double matriz[3][3] = {
        0,0,5,
        1,8,1,
        11,2,2
    };
    // llenarMatriz(matriz, 10);
    double diag[MMAX];
    double triang[3][3];
    // extraeDiagonal(matriz, 3, diag);
    // matrizTriangular(matriz, triang, 3);
    diagonalInversa(matriz, 3, diag);

    // imprimir el contenido del vector
    for(int i = 0 ; i < 3 ; i++) {
        cout << diag[i] << " ";
    }

    // imprimir el contenido de la matriz de dos dimensiones 
    // for(int i = 0 ; i < 3 ; i++) {
    //     cout << endl;
    //     for(int k = 0 ; k < 3 ; k++) {
    //         cout << triang[i][k] << endl;
    //     }
    // }
}




int enteroValidado() {
    int ingresado = -1;
    while(ingresado < 0 || ingresado > NMAX) {
        cout << "Ingrese un entero: ";
        cin >> ingresado;
    }
    // do {
    //     cout << "Ingrese un entero: ";
    //     cin >> ingresado;
    // } while(ingresado < 0 || ingresado > NMAX);
    return ingresado;
}

void llenarMatriz(double matriz[MMAX][MMAX], int N) {
    for(int i = 0 ; i < N ; i++) {
        for(int j = 0 ; j < N ; j++) {
            int entrada = -101;
            while(entrada < -100 || entrada > 100) {
                cout << "matriz[" << i << "][" << j << "] " << "Ingrese un entero entre -100 y 100: ";
                cin >> entrada;
            }
            matriz[i][j] = entrada;
        }
    }
}


void extraeDiagonal(double matriz[3][3], int N, double diag[MMAX]) {
    for(int i = 0 ; i < N ; i++) {
        for(int j = 0 ; j < N ; j++) {
            if(i == j) {
                diag[i] = matriz[i][j];
            }
        }
    }
}

void matrizTriangular(double matriz[3][3], double triang[3][3], int N) {
    for(int i = 0 ; i < N ; i++) {
        for(int j = 0 ; j < N ; j++) {
            if(i < j) {
                triang[i][j] = 0.0;
            }else {
                triang[i][j] = matriz[i][j];
            }
        }
    }
}

void diagonalInversa(double matriz[3][3], int N, double diagonalInversa[3]) {
    for(int i = 0 ; i < N ; i++) {
        diagonalInversa[i] = matriz[i][N-1-i];
    }
}