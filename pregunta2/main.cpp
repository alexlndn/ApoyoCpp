/*
   Ejercicio 2:

   Escriba un programa que declare una matriz de enteros de 4 filas y 4 columnas.
   Luego debe solicitar que se ingresen por teclado los valores de la matriz.

   Finalmente el programa debe encontrar cual de los valores de la matriz
   es más cercano a 10 y mostrar el resultado por pantalla.
*/

#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    for(int i = 0 ; i < 4 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            cin >> matriz[i][j];
        }
    }

    // buscar el valor mas cercano a 10
    // se define arbitrariamente como el mas cercano el primer elemento de la matriz
    int mas_cercano = matriz[0][0];

    for(int i = 0 ; i < 4 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            // se compara la distancia del mas cercano hasta 10 con la distancia del elemento actual hasta 10
            // si la distancia del actual es menor, almacena el nuevo valor en la variable mas_cercano
            if(abs(10 - mas_cercano) > abs(10 - matriz[i][j])) { // abs es valor absoluto
                mas_cercano = matriz[i][j];
            }
        }
    }

    cout << mas_cercano << endl;
}
