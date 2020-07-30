/*
    ** Especificación de Algoritmos - Noviembre 2015 **

    El programa debe pedirle al usuario que ingrese un vector de números
    reales según se indica en el ejemplo de ejecución del programa que se
    encuentra al final de este enunciado. El vector no deberá tener más
    de 20 números positivos y la finalización del mismo se realizará
    mediante el ingreso de un número negativo al final.

    Dicho vector se debe cargar dentro de la función cuyo nombre es
    "cargar_vector"

    Luego, el programa debe imprimir por pantalla el vector ingresado
    usando notación científica con dos dígitos decimales de
    precisión. Dicha tarea debe realizarse dentro de la función cuyo
    nombre es "imprimir_vector"

    A continuación, el programa debe encontrar los dos valores mas chicos
    del vector. Este cálculo se realizará en la función cuyo nombre es
    "encontrar_1er_y_2do_minimo"

    Posteriormente, el programa le pedirá al usuario que ingrese un nuevo
    número X y a continuación el programa deberá encontrar: (i) cual es
    el mayor número menor a X dentro del vector y (ii) cual es el menor
    número mayor a X dentro del vector. Si tal número no existiera se
    deberá imprimir el número -1. Esta última búsqueda se realizará en la
    función cuyo nombre es "buscar_xmax_xmin"

    A continuación, el programa deberá ordenar el vector de menor a mayor
    dentro de la función cuyo nombre es "ordenar_vector"

    Finalmente, el programa deberá guardar el vector en un archivo
    llamado "salida.txt". Esto último se realizará en la función
    cuyo nombre es "guardar_vector"

    Ejemplo de la ejecución del programa:

    Ingrese los elementos del vector: 9.1 8.3 7.6 4.2 2.2 -1

    El vector es:   9.10e+00  8.30e+00  7.60e+00  4.20e+00  2.20e+00

    El 1er minimo es: 2.20
    El 2do minimo es: 4.20

    Ingrese en valor de X: 4.3

    El mayor numero menor a X es: 4.20
    El menor numero mayor a X es: 7.60

    El vector ordenado se imprime a continuacion:
    El vector es:   2.20e+00  4.20e+00  7.60e+00  8.30e+00  9.10e+00
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
const int NMAX = 20;

void cargar_vector(float[NMAX], int&);
void imprimir_vector(float[NMAX], int);
void encontrar_1er_y_2do_minimo(float[NMAX], int);
void buscar_xmax_xmin(float[NMAX], int, float);
void ordenar_vector(float[NMAX], int);
void guardar_vector(float[NMAX], int);

int main() {
    float vector[NMAX];
    int length;
    cargar_vector(vector, length);
    imprimir_vector(vector, length);
    encontrar_1er_y_2do_minimo(vector, length);

    float num;
    cin >> num;
    buscar_xmax_xmin(vector, length, num);
    ordenar_vector(vector, length);
    imprimir_vector(vector, length);
    guardar_vector(vector, length);

}

void cargar_vector(float vector[NMAX], int& length) {
    float ingreso = 0;
    for(int i = 0 ; i < NMAX && ingreso >= 0 ; i++) {
        cin >> ingreso;
        if(ingreso > 0) {
            vector[i] = ingreso;
        }else {
            length = i;
        }
    }
    if(ingreso > 0) {
        length = NMAX;
    }

    return;
}

void imprimir_vector(float vector[NMAX], int length) {
    for(int i = 0 ; i < length ; i++) {
        cout << scientific << setprecision(2) << vector[i];
    }
    cout << endl;
    return;
}

void encontrar_1er_y_2do_minimo(float vector[NMAX], int length) {
    float menor1 = vector[0];
    float menor2 = vector[1];

    for(int i = 0 ; i < length ; i++) {
        if(vector[i] < menor1) {
            menor1 = vector[i];
        }
    }

    for(int i = 0 ; i < length ; i++) {
        if(vector[i] < menor2 && vector[i] > menor1) {
            menor2 = vector[i];
        }
    }

    cout << "Menor 1: " << menor1 << endl;
    cout << "Menor 2: " << menor2 << endl;
}


void buscar_xmax_xmin(float vector[NMAX], int n, float x) {
    float menor = vector[0];
    float mayor = vector[0];

    for(int i = 0 ; i < n ; i++) {
        if(vector[i] < menor) {
            menor = vector[i];
        }
        if(vector[i] > mayor) {
            mayor = vector[i];
        }
    }

    for(int i = 0 ; i < n ; i++) {
        if(vector[i] < x && vector[i] > menor) {
            menor = vector[i];
        }

        if(vector[i] > x && vector[i] < mayor) {
            mayor = vector[i];
        }
    }

    if(menor >= x) {
        menor = -1;
    }

    if(mayor <= x) {
        mayor = -1;
    }

    cout << "xmax: " << mayor << endl;
    cout << "xmin: " << menor << endl;
    return;
}

void ordenar_vector(float vector[NMAX], int n) {
    for(int i = 0 ; i < n ; i++) {
        for(int j = i + 1; j < n ; j++) {
            if(vector[j] < vector[i]) {
                vector[i] = vector[i] + vector[j];
                vector[j] = vector[i] - vector[j];
                vector[i] = vector[i] - vector[j];
            }
        }
    }
    return;
}

void guardar_vector(float vector[NMAX], int n) {
    ofstream escritor("salida.txt");
    for(int i = 0 ; i < n ; i++) {
        escritor << vector[i] << " ";
    }
    return;
}
