#include <iostream>
#include "help.h"
#include "windows.h"

int help() {

    std::cout << "g : Guess the number\n"
                 "h : This tab\n"
                 "e : exit\n"
    << std::endl;

    return 0;
}