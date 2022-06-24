#include <iostream>
#include "guessTheNumber.h"
#include "help.h"
#include "windows.h"

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char jeuChoisi;
    bool exit = false;

    std::cout << "\nBienvenue dans le minigame!!\n\n";

    while (!exit){

        std::cout << "choisissez un jeu (h pour la doc): ";
        std::cin >> jeuChoisi;
        std::cout << std::endl;

        switch (jeuChoisi) {
            case 'g':
                std::cout << "\n\tBienvenue dans guess the number:\n\n";
                guessTheNumber();
                break;
            case 'c':
                break;
            case 'h':
                help();
                break;
            case 'e':
                exit = true;
                break;
            default:
                std::cout << "ton pere la truite choisis un jeu qui existe zebi\n\n";
        }
    }

    return 0;
}
