/*

    El programa base solicita al usuario que ingrese un numero entre el 1 y el 4,
    esto no debe ser modificado.

    Debe programar 4 funciones, las cuales sus prototipos son los siguientes:
    void sumar(int, int);
    void restar(int, int);
    void multiplicar(int, int);
    void dividir(int, int);

    cada una de estas funciones debera imprimir:
    - el nombre de la operacion, dos puntos y el resultado de la misma, ejemplos:
    > multiplicacion: 6
    > resta: 2
    > suma: 11

    el programa deberá solicitar al usuario que ingrese dos numeros.

    De acuerdo a la opcion introducida en el primer paso el programa deberá:
    - 1: El programa llamara a la funcion sumar con los dos numeros ingresados por el usuario
    - 2: El programa llamara a la funcion restar con los dos numeros ingresados por el usuario
    - 3: El programa llamara a la funcion multiplicar con los dos numeros ingresados por el usuario
    - 4: El programa llamara a la funcion dividir con los dos numeros ingresados por el usuario

*/


#include <iostream>
using namespace std;

int main() {
    int opcion = 0;
    while(opcion < 1 || opcion > 4) {
        cin >> opcion;
    }
    // TODO: desarrollar solucion


    return 0;
}
