#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // operaciones matematicas
    int a = 5 + 2; // suma
    cout << "suma: " << a << endl;
    int b = 5 - 2; // resta
    cout << "resta: " << b << endl;
    int c = 3 * 7; // producto
    cout << "producto: " << c << endl;
    int d = 8 / 2; // division
    cout << "division: " << d << endl;
    int e = 8 % 2; // modulo
    cout << "modulo: " << e << endl;

    cout << "\n\n";

    // operadores unitarios
    cout << "Operador unitario de adicion:\n";
    cout << a++ << " " << a << endl;
    cout << ++a << " " << a << endl;
    cout << "Operador unitario de sustraccion:\n";
    cout << a-- << " " << a << endl;
    cout << --a << " " << a << endl;

    cout << "\n\n";

    // operador de comparacion
    // el valor devuelto por una comparacion es un valor booleano
    cout << ('a' == 'a') << endl;
    cout << ('a' != 'a') << endl;
    cout << (a == b) << endl;

    bool esIgual = e == false;
    cout << esIgual << endl;


    // otras operaciones importantes
    // utilizan la libreria cmath (ver includes al comienzo del archivo)
    cout << "Elevar un numero a la X" << endl;
    cout << pow(5, 2) << endl;

    cout << "Obtener la raiz cuadrada de un numero" << endl;
    cout << sqrt(16) << endl;

    cout << "Obtener la raiz cuarta de un numero" << endl;
    cout << sqrt(sqrt(16)) << endl;

    return 0;
}
