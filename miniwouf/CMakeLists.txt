cmake_minimum_required(VERSION 3.22)
project(miniwouf)

set(CMAKE_CXX_STANDARD 20)

add_executable(MINIWOUF main.cpp guessTheNumber.cpp guessTheNumber.h help.cpp help.h coinToss.cpp coinToss.h dice.cpp dice.h moneyCount.cpp moneyCount.h GameOfLife.cpp GameOfLife.h)

