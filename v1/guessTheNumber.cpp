#include <iostream>
#include "guessTheNumber.h"
#include "windows.h"

int guessTheNumber() {

    SetConsoleOutputCP(CP_UTF8);

    int nombreAleatoire = rand() % 100 + 1;
    int nEssai = 10;
    bool trouve = false;
    bool perdu = false;

    std::cout << "nombre aléatoire généré!" << std::endl;

    while((!trouve) && (!perdu)){
        int guess;

        std::cout << "essayez de le deviner, vous avez " << nEssai << " essais :";
        std::cin >> guess;

        if(guess == nombreAleatoire){
            nEssai--;
            if(nEssai == 9){
                std::cout << "\n\tINCROYABLE!! vous avez trouvé " << nombreAleatoire << " du premier coup!" << std::endl;
            }else{
                std::cout << "\n\tBravo!! vous avez trouvé " << nombreAleatoire << " en " << 10 - nEssai << " essais" << std::endl;
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
            if(guess < nombreAleatoire - 10){
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