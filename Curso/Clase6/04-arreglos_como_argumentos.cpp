#include <iostream>
using namespace std;

const int SIZE = 100;

void solicitar_arreglo(int[SIZE][SIZE], int);

int main() {

    int elementos;
    cin >> elementos;

    int matriz[SIZE][SIZE];

    solicitar_arreglo(matriz, elementos);

    // imprimir valores del arreglo
    for(int i = 0 ; i < elementos ; i++) {
        for(int j = 0 ; j < elementos ; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void solicitar_arreglo(int m[SIZE][SIZE], int tam) {
    // cuando un arreglo es pasado como argumento, este se recibe como un puntero
    // ( los datos que cambien en este arreglo serán reflejados en el original [definido en el main])
    for(int i = 0 ; i < tam ; i++) {
        for(int j = 0 ; j < tam ; j++) {
            cin >> m[i][j];
        }
    }
    return;
}
