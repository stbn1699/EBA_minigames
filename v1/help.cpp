#include <iostream>
#include "help.h"

int help() {

    std::cout << "c : Coin toss\n"
                 "d : dice\n"
                 "e : Exit\n"
                 "h : This tab\n"
                 "g : Guess the number\n"
                 "m : Money count\n"
    << std::endl;

    return 0;
}