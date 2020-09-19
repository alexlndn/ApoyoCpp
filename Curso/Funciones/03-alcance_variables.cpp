#include <iostream>
using namespace std;

int sumar(int, int);

int main() {
    int z = 30;
    cout << sumar(2, 3) << endl;

    // cout << c << endl; <-- ERROR 'c' no es esta definida en este ambito

    int suma = sumar(10, 20);
    cout << suma << endl;

}


int sumar(int a, int b) {
    // las variables aqui definidas solo existen dentro de esta funcion

    // las variables definidas en el main no estan disponibles dentro de esta funcion
    // cout << z << endl; <-- ERROR 'z' no ha sido declarada en este ambito

    int c = a + b;
    return c;
}
