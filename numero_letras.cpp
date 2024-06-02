#include <iostream>

int main() {
    char caracter;
    int cantidad;

    // Solicitar al usuario un carácter
    std::cout << "Ingrese un carácter: ";
    std::cin >> caracter;

    // Solicitar al usuario la cantidad de veces que el carácter debe repetirse
    std::cout << "Ingrese la cantidad de veces que el carácter debe repetirse: ";
    std::cin >> cantidad;

    // Imprimir el carácter la cantidad de veces solicitada
    for (int i = 0; i < cantidad; i++) {
        std::cout << caracter << " ";
    }

    std::cout << std::endl;

    return 0;
}
