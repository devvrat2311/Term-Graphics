#include"game.h"
#include<iostream>

Game::Game() : gameBoard(99, 23)
{
    std::cout << "gameboard initialized. . . beep boop" << '\n';
    newmap[{2,2}] = 'a';
}

void Game::display() {
    Coord C(2,3), C1;
    Coord A = {1,1};
    assignChar(C1, 'x');
    std::cout << A.getx() << " " << A.gety() << '\n';
    std::cout << newmap[C] << std::endl;
    std::cout << newmap[C1] << std::endl;

}

void Game::assignChar(Coord C, char c){
    newmap[C] = c;
}

