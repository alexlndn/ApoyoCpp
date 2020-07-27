#include <iostream>
using namespace std;

void test(int&);

int main() {
    int a = 3;
    // imprimir la direccion de memoria asignada a una variable
    cout << a << " | " << &a;
    cout << &a;

    return 0;
}

void test(int& a) {
    a++;
    return;
}
