#include <iostream>

using namespace std;

int main() {
    // REPASO BOOLEANOS
    // un valor booleano es un valor que solo puede tener dos estados, verdadero o falso.
    // hay ciertos valores que tienen este significado
    // en enteros el valor 0 es un falso y cualquier valor distinto de 0 es verdadero
    // en float el valor 0.0 es falso y cualquier otro valor es verdadero.
    // los punteros a un null son falsos y un puntero a cualquier valor es verdadero (se verá punteros mas adelante)


    // estructura de decision simple
    // el parametro del IF deberá ser un valor que represente un valor booleano
    if(true) {
        cout << "Hola, bienvenido\n";
    }

    // estructura de decision doble

    if(false) {
        // do something
        // este codigo se ejecutara nunca en este caso
    } else {
        // este codigo siempre se va a ejecutar en este caso
        cout << "Ingresando en la segunda parte de la decision.\n";
    }

    // estructuras de decisión anidadas
    if(1) {
        if(0 == 1) {
            // esto no se ejecutará
        }else {
            // esto si se ejecutará
        }
    }else {
        // esto no se ejecutará
    }

    return 0;
}
