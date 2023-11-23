#include"game.h"
#include<iostream>


Game::Game() : gameBoard(37,17)
{
    std::cout << "gameboard initialized. . . beep boop" << '\n';
}

void Game::display() {
  std::cout << "calling from Game display \n"; 
  gameBoard.renderInitialSetup();
  gameBoard.drawBoard();
  std::cout << gameBoard.count << std::endl;
	
}


