#include <iostream>
using namespace std;

int main() {
    int a;

    a = 3; // asignacion de un valor a la variable
    a = a + 2; // sumarle 2 a la variable existente
    a += 2; // es exactamente lo mismo a la linea anterior

    int b;

    b = 8; // asignacion del valor 8 a la variable
    b -= 4; // restarle 2 a la variable
    b = b - 4; // es exactamente lo mismo a la linea anterior

    b = b / 2; // dividir el valor de b en 2 y guardarlo en b
    b /= 2; // lo mismo que la linea anterior

    b = b * 2; // multiplicar por dos a b y guardarlo en b
    b *= 2; // lo mismo que la linea anterior
}
