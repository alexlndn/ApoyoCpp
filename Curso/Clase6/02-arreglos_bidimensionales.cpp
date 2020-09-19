#include <iostream>
using namespace std;
const int TAMANO = 100;

int main() {
    // las dimensiones del arreglo bidimensional deben ser definidas en su declaracion
    int distancias[TAMANO][TAMANO];

    int cantidad_ciudades;
    cin >> cantidad_ciudades;

    // se utiliza un bucle repetitivo para solicitar el ingreso de los valores al usuario
    for(int i = 0 ; i < cantidad_ciudades ; i++) {
        for(int j = 0 ; j < cantidad_ciudades ; j++) {
            if(i != j)
                cin >> distancias[i][j];
        }
    }

    // se utiliza un bucle repetitivo para imprimir los valores asignados al arreglo
    for(int i = 0 ; i < cantidad_ciudades ; i++) {
        for(int j = 0 ; j < cantidad_ciudades ; j++) {
            if(i != j)
                cout << "La distancia desde la ciudad " << i << " hasta la ciudad " << j << " es " << distancias[i][j] << endl;
        }
    }

    return 0;
}
