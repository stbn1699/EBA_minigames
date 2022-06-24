#include <iostream>
#include "guessTheNumber.h"
#include "windows.h"

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char jeuChoisi;

    std::cout << "\nBienvenue dans le minigame!! veuillez choisir un jeu: ";
    std::cin >> jeuChoisi;
    std::cout << std::endl;

    switch (jeuChoisi) {
        case 'g':
            std::cout << "\n\tBienvenue dans guess the number:\n\n";
            guessTheNumber();
            break;
        case 'c':
            break;
        default:
            std::cout << "connard";
    }

    return 0;
}
