/*
    Pregunta 4:
    Codifique la definición de una función cuyo prototipo es:
        void extraeFila(int matriz[NMAX][NMAX], int Nodos, int f, int fila[NMAX]);

    La función recibe como argumento un arreglo bidimensional de enteros con NMAX filas y NMAX columnas.
    Se debe asumir que NMAX es una constante global (no es necesario definirla).
    Ademas la funcion acepta un argumento entero Nodos que representa el numero de filas y el numero de columnas,
    se asume que Nodos es menor o igual que NMAX y mayor a cero, no es necesario comprobarlo.
    La función debe copiar los elementos de la fila cuyo indice es f (pasado como argumento) en el arreglo
    unidimensional fila pasado como argumento.

*/

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
