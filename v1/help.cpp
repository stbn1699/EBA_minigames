#include <iostream>
#include "help.h"
#include "windows.h"

int help() {

    SetConsoleOutputCP(CP_UTF8);

    std::cout << "g : Guess the number\n"
                 "c : Coin toss\n"
                 "h : This tab\n"
                 "e : Exit\n"
    << std::endl;

    return 0;
}