/*
    Problema:
    Escriba un programa que solicite al usuario un numero entre 1 y 10, el cual
    va a representar la cantidad de elementos de un vector de numeros enteros.
    Luego de ingresar este numero, el programa debe pedir que se ingresen todos los valores
    del vector.
    Este procedimiento se debe repetir dos veces para que el usuario ingrese 2 vectores.
    Cuando los vectores estén completos, el programa debe calcular un nuevo vector que contenga los numeros que tienen
    en comun los dos vectores ingresados por el usuario.
    El nuevo vector no debe contener numeros repetidos y los numeros deben respetar el orden en que se encontraron
    en el primer vector ingresado.
    Finalmente el programa debe imprimir por pantalla los numeros del nuevo vector separados por un espacio.
*/

#include <iostream>
using namespace std;
const int NMAX = 10;

void ingresar_vector(int[NMAX], int);
void obtener_repetidos(int[NMAX], int[NMAX], int, int[NMAX], int&);
void imprimir_vector(string, int[NMAX], int);

int main() {
    int elementos;
    cin >> elementos;
    int vector1[NMAX];
    int vector2[NMAX];
    int repetidos[NMAX];

    ingresar_vector(vector1, elementos);
    imprimir_vector("Vector 1", vector1, elementos);
    ingresar_vector(vector2, elementos);
    imprimir_vector("Vector 2", vector2, elementos);

    int r = 0;
    obtener_repetidos(vector1, vector2, elementos, repetidos, r);

    imprimir_vector("Repetidos", repetidos, r);

    return 0;
}

void ingresar_vector(int vector[NMAX], int n) {
    for(int i = 0 ; i < n ; i++) {
        cin >> vector[i];
    }
}

void imprimir_vector(string nombre, int vector[NMAX], int n) {
    cout << "Imprimir vector " << nombre << ":\n";
    for(int i = 0 ; i < n ; i++) {
        cout << vector[i] << " ";
    }
    cout << "\n";
    return;
}

void obtener_repetidos(int vector1[NMAX], int vector2[NMAX], int n, int vector_repetidos[NMAX], int &r) {
    int agregados = 0;
    for(int i = 0 ; i < n ; i++ ) {
        for(int j = 0 ; j < n ; j++) {
            bool esta = false;
            if(vector1[i] == vector2[j]) {
                for(int k = 0 ; k < agregados ; k++) {
                    if(vector_repetidos[k] == vector1[i]) {
                        esta = true;
                    }
                }
                if(esta == false) {
                    vector_repetidos[agregados] = vector1[i];
                    agregados++;
                }
            }
        }
    }

    r = agregados;
    return;
}
