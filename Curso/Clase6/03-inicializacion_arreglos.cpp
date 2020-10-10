#include <iostream>
using namespace std;
const int SIZE = 3;

int main() {
    int datos[SIZE][SIZE] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
        };

    // Tambien es posible definirlos en una sola linea ya que el compilador ignora los espacios y saltos de linea del codigo.
    // int datos[SIZE][SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 0 ; i < SIZE ; i++) {
        for(int j = 0 ; j < SIZE ; j++) {
            cout << datos[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
