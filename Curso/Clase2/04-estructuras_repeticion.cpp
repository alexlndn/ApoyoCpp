#include <iostream>
using namespace std;

int main() {

    // revisar los operadores unitarios y el tipo de dato bool

    // estructura de repeticion 1: while
    cout << "\nWHILE:\n";
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

    cout << endl;

    // estructura de repeticion 2: for
    cout << "\nFOR:\n";
    for(int i = 0 ; i < 10 ; i++) {
        cout << i << " ";
    }
    cout << endl;
    for(int i = 0 ; i < 10 ;) {
        cout << i++ << " ";
    }

    cout << "\n\n";

    // estructura de repeticion 3: do while
    cout << "\nDO WHILE:\n";
    int n = 5;
    do {
        cout << n << " ";
    } while(n--);

    cout << "\n\n";

    int m = 5;
    do {
        cout << m-- << " ";
    } while(m);
    cout << endl;

    return 0;
}
