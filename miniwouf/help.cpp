#include <iostream>
#include "help.h"

int help() {

    std::cout << "c : Coin toss\n"
                 "d : dice\n"
                 "e : Exit\n"
                 "g : Guess the number\n"
                 "h : This tab\n"
                 "l : Conway's game of life (work in progress)\n"
                 "m : Money count\n"
    << std::endl;

    return 0;
}