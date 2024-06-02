#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Inicializar el generador de números aleatorios

    for (int k = 1; k <= 3; k++) {
        std::cout << "PULSE ENTER para tirar los dados";
        std::cin.get();

        int dado1 = std::rand() % 6 + 1; // Generar un número aleatorio entre 1 y 6
        int dado2 = std::rand() % 6 + 1; // Generar un número aleatorio entre 1 y 6

        std::cout << "Lanzamiento " << k << ": Dado 1 = " << dado1 << ", Dado 2 = " << dado2 << std::endl;

        if (dado1 == dado2 || (dado1 + dado2) == 7) {
            std::cout << "¡FELICITACIONES! GANASTE EN EL INTENTO #" << k << std::endl;
            break;
        }

        if (k == 3) {
            std::cout << "Lo siento, has agotado tus 3 intentos." << std::endl;
        }
    }

    return 0;
}

