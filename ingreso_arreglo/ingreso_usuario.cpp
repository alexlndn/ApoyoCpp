/*
    Problema:
    Escriba un programa que solicite al usuario un numero entre 1 y 10, el cual
    va a representar la cantidad de elementos de un vector de numeros enteros.
    Luego de ingresar este número, el programa debe pedir que se ingresen todos los valores
    del vector.
    Este procedimiento se debe repetir dos veces para que el usuario ingrese 2 vectores.
    Cuando los vectores estén completos, el programa debe calcular un nuevo vector que contenga los números que tienen
    en común los dos vectores ingresados por el usuario.
    El nuevo vector no debe contener números repetidos y los números deben respetar el orden en que se encontraron
    en el primer vector ingresado.
    Finalmente el programa debe imprimir por pantall los números del nuevo vector separados por un espacio.
*/

#include <iostream>
using namespace std;
const int NMAX = 10;

void ingresar_vector(int[NMAX], int);

int main() {
    int elementos;
    cin >> elementos;
    int vector1[NMAX];
    int vector2[NMAX];

    ingresar_vector(vector1, elementos);
    ingresar_vector(vector2, elementos);

    for(int i = 0 ; i < elementos ; i++) {
        cout << vector1[i] << " ";
    }

    return 0;
}

void ingresar_vector(int vector[NMAX], int n) {
    for(int i = 0 ; i < n ; i++) {
        cin >> vector[i];
    }
}

void obtener_repetidos(int vector1[NMAX], int vector2[NMAX], int n) {
    int ya_agregados[NMAX];
    int agregados = 0;
    for(int i = 0 ; i < n ; i++ ) {
        for(int j = 0 ; j < n ; j++) {
            if(vector1[i] == vector2[j]) {
                //
            }
        }
    }
}
