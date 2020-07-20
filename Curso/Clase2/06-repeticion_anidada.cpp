#include <iostream>
using namespace std;

int main() {

    // doble bucle for, es lo mas utilizado para recorrer matrices de 2 dimensiones
    for(int i = 0 ; i < 5 ; i++) {
        for(int j = 0 ; j < 5 ; j++) {
            cout << i << " " << j << endl;
        }
    }

    // las estructuras de repeticion se pueden anidar, existe un límite que lo da la misma pc
    // tener siempre en cuenta los controles de salida de los bucles,
    // caso contrario se puede entrar en un bucle infinito (evitar esto ya que puede trabar la pc)

    return 0;
}
