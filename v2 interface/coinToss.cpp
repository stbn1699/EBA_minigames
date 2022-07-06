#include <iostream>
#include "coinToss.h"
#include <stdlib.h>
#include <time.h>

int coinToss() {

    std::string nomFace;
    std::string nomPile;
    int toss;
    const int MAX = 1, MIN = 0;
    srand(time(NULL));
    toss = (rand() % (MAX - MIN + 1)) + MIN;

    std::cout << "\n\t|Bienvenue dans Coin Toss|\n\n";
    std::cout << " tapez le nom du joueur pile : ";
    std::cin >> nomPile;
    std::cout << "tapez le nom du joueur face : ";
    std::cin >> nomFace;
    std::cout << std::endl;

    switch (toss){
        case 0:
            std::cout << "\t-> Pile! " << nomPile << " a gagné!\n\n";
            break;
        case 1:
            std::cout << "\t-> Face! " << nomFace << " a gagné!\n\n";
            break;
    }

    return 0;
}