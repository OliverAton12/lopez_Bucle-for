#include <iostream>

int main() {
    int tabla;

    // Solicitar al usuario una tabla de multiplicar
    std::cout << "Ingrese el número de la tabla de multiplicar: ";
    std::cin >> tabla;

    // Imprimir la tabla de multiplicar en el formato deseado
    for (int i = 1; i <= 12; i++) {
        std::cout << tabla << " x " << i << " = " << tabla * i << std::endl;
    }

    return 0;
}
