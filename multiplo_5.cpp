#include <iostream>

int main() {
    // Imprimir los números múltiplos de 5 comprendidos entre 1 y 100
    for (int numero = 1; numero <= 100; numero++) {
        if (numero % 5 == 0) {
            std::cout << numero << std::endl;
        }
    }
    return 0;
}
