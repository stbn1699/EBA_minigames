#include <iostream>
#include "moneyCount.h"
#include "windows.h"
#include <stdlib.h>
#include <time.h>

int moneyCount() {

    SetConsoleOutputCP(CP_UTF8);

          int billets[] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
    int nombreBillets[] = {0, 0, 0, 0,  0,  0,  0,   0,   0};
    int prix;
    std::string devise;

    std::cout << "\n\t|Bienvenue dans money count|\n\n";

    std::cout << "veuillez indiquer la devise : ";
    std::cin >> devise;

    std::cout << "veuillez indiquer le prix : ";
    std::cin >> prix;

    while(prix != 0){

        if (prix >= billets[8]){
            prix = prix - billets[8];
            nombreBillets[8] ++;
        }else if (prix >= billets[7]){
            prix = prix - billets[7];
            nombreBillets[7] ++;
        }else if (prix >= billets[6]){
            prix = prix - billets[6];
            nombreBillets[6] ++;
        }else if (prix >= billets[5]){
            prix = prix - billets[5];
            nombreBillets[5] ++;
        }else if (prix >= billets[4]){
            prix = prix - billets[4];
            nombreBillets[4] ++;
        }else if (prix >= billets[3]){
            prix = prix - billets[3];
            nombreBillets[3] ++;
        }else if (prix >= billets[2]){
            prix = prix - billets[2];
            nombreBillets[2] ++;
        }else if (prix >= billets[1]){
            prix = prix - billets[1];
            nombreBillets[1] ++;
        }else if(prix >= billets[0]){
            prix = prix - billets[0];
            nombreBillets[0] ++;
        }else{
            std::cout << "\nprix trop bas" << std::endl;
            prix = 0;
        }

    }

    std::cout << "\nil vous faut : \n";
                                        if(nombreBillets[0] != 0){
                                            if(nombreBillets[0] > 1){ std::cout << nombreBillets[0] << " pièce(s) de 1 " << devise << std::endl; }
                                            else { std::cout << nombreBillets[0] << " pièce de 1 " << devise << std::endl; }
                                        }
                                        if(nombreBillets[1] != 0){
                                            if(nombreBillets[1] > 1){ std::cout << nombreBillets[1] << " pièces de 2 " << devise << std::endl; }
                                            else { std::cout << nombreBillets[1] << " pièce de 2 " << devise << std::endl; }
                                        }
                                        if(nombreBillets[2] != 0){
                                            if(nombreBillets[2] > 1){ std::cout << nombreBillets[2] << " billets de 5 " << devise << std::endl; }
                                            else { std::cout << nombreBillets[2] << " billet de 5 " << devise << std::endl; }
                                        }
                                        if(nombreBillets[3] != 0){
                                            if(nombreBillets[3] > 1){ std::cout << nombreBillets[3] << " billets de 10 " << devise << std::endl; }
                                            else { std::cout << nombreBillets[3] << " billet de 10 " << devise << std::endl; }
                                        }
                                        if(nombreBillets[4] != 0){
                                            if(nombreBillets[4] > 1){ std::cout << nombreBillets[4] << " billets de 20 " << devise << std::endl; }
                                            else { std::cout << nombreBillets[4] << " billet de 20 " << devise << std::endl; }
                                        }
                                        if(nombreBillets[5] != 0){
                                            if(nombreBillets[5] > 1){ std::cout << nombreBillets[5] << " billets de 50 " << devise << std::endl; }
                                            else { std::cout << nombreBillets[5] << " billet de 50 " << devise << std::endl; }
                                        }
                                        if(nombreBillets[6] != 0){
                                            if(nombreBillets[6] > 1){ std::cout << nombreBillets[6] << " billets de 100 " << devise << std::endl; }
                                            else { std::cout << nombreBillets[6] << " billet de 100 " << devise << std::endl; }
                                        }
                                        if(nombreBillets[7] != 0){
                                            if(nombreBillets[7] > 1){ std::cout << nombreBillets[7] << " billets de 200 " << devise << std::endl; }
                                            else { std::cout << nombreBillets[7] << " billet de 200 " << devise << std::endl; }
                                        }
                                        if(nombreBillets[8] != 0){
                                            if(nombreBillets[8] > 1){ std::cout << nombreBillets[8] << " billets de 500 " << devise << std::endl; }
                                            else { std::cout << nombreBillets[8] << " billet de 500 " << devise << std::endl; }
                                        }
                                        std::cout << std::endl;

    return 0;
}