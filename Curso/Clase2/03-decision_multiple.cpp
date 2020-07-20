#include <iostream>
using namespace std;

int main() {

    int variable;
    cin >> variable;

    switch (variable) {
    case 1:
        cout << "El valor es" << variable << endl;
        break;
    case 2:
        cout << "Ingresaste un 2\n";
        break;
    case 3:
        cout << "Un 3, me gusta.\n";
        break;
    case 4:
        cout << "Esta era la ultima opcion, bien hecho.\n";
        break;

    default:
        cout << "El valor ingresado esta fuera de rango.\n";
        break;
    }

    return 0;
}
