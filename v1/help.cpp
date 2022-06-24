#include <iostream>
#include "help.h"
#include "windows.h"

int help() {

    SetConsoleOutputCP(CP_UTF8);

    std::cout << "c : Coin toss\n"
                 "d : dice\n"
                 "e : Exit\n"
                 "h : This tab\n"
                 "g : Guess the number\n"
    << std::endl;

    return 0;
}