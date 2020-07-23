/*
    Recursividad es cuando una funcion se llama a si misma una cantidad determinada
    de veces para solucionar un problema.
    En este caso se plantea el problema de calcular el factorial de un numero.
*/

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int factorialNum = factorial(num);
    cout << "El factorial de " << num << " es " << factorialNum << endl;

    return 0;
}

int factorial(int num) {
    if(num > 2) {
        return num * factorial(num - 1);
    } else {
        return num;
    }
}
