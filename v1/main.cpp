#include <iostream>
#include "guessTheNumber.h"
#include "help.h"
#include "coinToss.h"
#include "dice.h"
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
                guessTheNumber();
                break;
            case 'c':
                coinToss();
                break;
            case 'd':
                dice();
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
