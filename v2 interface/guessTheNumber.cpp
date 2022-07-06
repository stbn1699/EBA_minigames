#include <iostream>
#include "guessTheNumber.h"
#include <stdlib.h>
#include <time.h>

int guessTheNumber() {

    int nombreAleatoire;
    const int MAX = 100, MIN = 0;
    srand(time(NULL));
    nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;

    int nEssai = 10;
    bool trouve = false;
    bool perdu = false;

    std::cout << "\n\t|Bienvenue dans guess the number|\n\n";
    std::cout << "nombre aléatoire généré!" << std::endl;

    while((!trouve) && (!perdu)){
        int guess;

        std::cout << "essayez de le deviner, vous avez " << nEssai << " essais :";
        std::cin >> guess;

        if(guess == nombreAleatoire){
            nEssai--;
            if(nEssai == 9){
                std::cout << "\n\tINCROYABLE!! vous avez trouvé " << nombreAleatoire << " du premier coup!\n\n";
            }else{
                std::cout << "\n\tBravo!! vous avez trouvé " << nombreAleatoire << " en " << 10 - nEssai << " essais\n\n";
            }
            trouve = true;
        }else if(nEssai == 0){
            perdu = true;
            std::cout << "\n\tHo non... vous n'avez plus d'essai... retentez la peichaine fois!! ^^" << std::endl;
        }else if(guess < nombreAleatoire){
            if(guess < nombreAleatoire - 10){
                std::cout << "votre nombre est beaucoup plus petit !" << std::endl;
            }else{
                std::cout << "votre nombre est plus petit !" << std::endl;
            }
            nEssai--;
        }else if(guess > nombreAleatoire){
            if(guess < nombreAleatoire + 10){
                std::cout << "votre nombre est beaucoup plus grand !" << std::endl;
            }else{
                std::cout << "votre nombre est plus grand !" << std::endl;
            }
            nEssai--;
        }
        guess = 0; //anti caractère dans guess
    }

    return 0;
}