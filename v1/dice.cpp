#include <iostream>
#include "dice.h"
#include <stdlib.h>
#include <time.h>

int dice() {

    std::string nomFace;
    std::string nomPile;
    int nombreFace;
    int nombreLancer;
    int numeroDe = 0;
    bool exitDice = false;

    std::cout << "\n\t|Bienvenue dans Dice|\n\n";

    while(!exitDice){
        nombreFace = 0;
        nombreLancer = 0;
        numeroDe = 0;

        std::cout << "Combien de faces voulez vous? (0 pour quitter) ";
        std::cin >> nombreFace;

        std::cout << "combien de lancer voulez vous? ";
        std::cin >> nombreLancer;

        int dice[nombreLancer];

        if(nombreFace > 0){
            while(nombreLancer != 0){

                numeroDe ++;
                nombreLancer--;
                srand(time(NULL));
                dice[numeroDe] = rand() % nombreFace + 1;

                std::cout << "dé n°" << numeroDe << " : " << dice[numeroDe] << " - " << numeroDe << std::endl;

            }
        }else if(nombreFace == 0){
            exitDice = true;
        }else{
            nombreFace = 1;
            std::cout << "vous avez tapé un mauvais numéro :/";
        }

    }

    return 0;
}