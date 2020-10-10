#include <iostream>
using namespace std;

int main() {
    // un arreglo es una coleccion de elementos del mismo tipo
    // la dimension del arreglo o vector debe ser definida en su declaracion (por preferencia una constante)
    const int cantidad = 100;
    int edades[cantidad];

    /* aunque en su declaracion utilizamos el 100 (que es el limite maximo que establecemos),
       se puede utilizar una fraccion del arreglo, por ejemplo, guardar solo 8 datos
    */

    int cantidad_alumnos;
    // controlar que la cantidad de elementos no sea mayor a la maxima capacidad del vector (array)
    do {
        cin >> cantidad_alumnos;
    } while(cantidad_alumnos < 0 || cantidad_alumnos > 100);

    // se utiliza un bucle repetitivo para solicitar el ingreso de los valores al usuario
    for(int i = 0 ; i < cantidad_alumnos ; i++) {
        cin >> edades[i];
    }

    // se utiliza un bucle repetitivo para imprimir los valores asignados al arreglo
    for(int i = 0 ; i < cantidad_alumnos ; i++) {
        cout << edades[i] << " ";
    }

    cout << endl << edades[0] << endl; // acceso a un elemento en concreto del vector
    // cout << endl << edades[981273] << endl;  // segmentation fault

    return 0;
}
