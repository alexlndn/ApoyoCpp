#include <iostream>
#include <cmath>
#define SIZE 5

using namespace std;

void buscar_posicion(char[SIZE], char);

int main() {
    /*
        Se plantea como tarea implementar el mismo ejemplo pero para enteros en vez de chars
    */
    char lista[SIZE];

    for(int i = 0 ; i < SIZE ; i++) {
        cout << "Ingrese el caracter [" << i << "]: ";
        cin >> lista[i];
    }

    char buscar;
    cout << "Ingrese el caracter a buscar: ";
    cin >> buscar;

    buscar_posicion(lista, buscar);

    return 0;
}

void buscar_posicion(char l[SIZE], char c) {
    for(int i = 0 ; i < SIZE ; i++) {
        if(l[i] == c) {
            cout << "Se encuentra en la posicion " << i << " del arreglo.\n";
        }
    }
    return;
}
