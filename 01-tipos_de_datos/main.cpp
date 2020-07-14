#include <iostream>

int main(int argc, char *argv[]) {
    setlocale(LC_CTYPE, "Spanish");

    std::cout << "Bienvenido a la clase de tipos de datos.\n";
    std::cout << "\n";

    int numeroEntero = 3;
    std::cout << "Un numero entero se define con la palabra clave 'int'.\nint numeroEntero = 3;\n";
    std::cout << numeroEntero << "\n\n";

    float numeroFlotante = 3.3;
    std::cout << "Un numero de punto flotante se define con la palabra clave 'float' o 'double'.\nfloat numeroFlotante = 3.3;" << "\n";
    std::cout << numeroFlotante << "\n\n";

    char caracter1 = 'c';
    std::cout << "Un caracter se define con la palabra clave 'char'.\nchar caracter1 = 'c';\n";
    std::cout << caracter1 << "\n\n";

    system("PAUSE");
}
