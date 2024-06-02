#include <iostream>

int main() {
    int sumatoria = 0;

    // Realizar la sumatoria de los números del 1 al 100
    for (int i = 1; i <= 100; i++) {
        sumatoria += i;
    }

    // Imprimir la sumatoria
    std::cout << "La sumatoria de los números del 1 al 100 es: " << sumatoria << std::endl;

    return 0;
}
