#include <iostream>
#include <cmath>
#define SIZE 5

using namespace std;

void imprimir(int[SIZE]);
void ordenar(int[SIZE]);

int main() {
    int lista[SIZE];

    for(int i = 0 ; i < SIZE ; i++) {
        cout << "Ingrese el valor [" << i << "]: ";
        cin >> lista[i];
    }

    cout << "El vector ingresado es: ";
    imprimir(lista);
    ordenar(lista);
    cout << "El vector ordenado es: ";
    imprimir(lista);

    return 0;
}

void imprimir(int l[SIZE]) {
    for(int i = 0 ; i < SIZE ; i++) {
        cout << l[i] << " ";
    }
    cout << endl;
    return;
}

void ordenar(int l[SIZE]) {
    /*
        Solicitar al alumno un brainstorm para solucionar el problema
    */
    return;
}
