#include"game.h"
#include<iostream>


Game::Game() : gameBoard()
{
    std::cout << "gameboard initialized. . . beep boop" << '\n';
}

void Game::display() {
  std::cout << "calling from Game display \n"; 
  gameBoard.renderInitialSetup();
  gameBoard.drawBoard();
  std::cout << gameBoard.count << std::endl;
	
}


