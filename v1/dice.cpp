#include <iostream>
#include "dice.h"
#include "windows.h"
#include <stdlib.h>
#include <time.h>

int dice() {

    SetConsoleOutputCP(CP_UTF8);

    std::string nomFace;
    std::string nomPile;
    int nombreFace;
    bool exitDice = false;

    std::cout << "\n\t|Bienvenue dans Dice|\n\n";

    while(!exitDice){
        std::cout << "Combien de faces voulez vous? (0 pour quitter)";
        std::cin >> nombreFace;

        if(nombreFace > 0){
            int dice;
            const int MAX = nombreFace, MIN = 1;
            srand(time(NULL));
            dice = (rand() % (MAX - MIN + 1)) + MIN;
            std::cout << "\n\t\t " << dice << "\n\n";
        }else if(nombreFace == 0){
            exitDice = true;
        }else{
            nombreFace = 1;
            std::cout << "vous avez tamé un mauvais numéro :/";
        }

    }

    return 0;
}