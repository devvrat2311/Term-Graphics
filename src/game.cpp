#include"game.h"
#include<iostream>

Game::Game() : gameBoard(99, 23)
{
    std::cout << "gameboard initialized. . . beep boop" << '\n';
}

void Game::display() {
    gameBoard.drawBoard();
}
