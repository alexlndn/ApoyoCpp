#include <iostream>
using namespace std;

int main() {

    // revisar los operadores unitarios y el tipo de dato bool

    // estructura de repeticion 1: while
    int a = 5;
    while(a--) {
        cout << a << " ";
    }

    cout << endl;

    int b = -3;
    while(b) {
        cout << b << " ";
        b++;
    }

    cout << endl;

    b = -3;
    while(b) {
        cout << b++ << " ";
    }

    return 0;
}
