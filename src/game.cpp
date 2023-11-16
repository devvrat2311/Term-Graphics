#include"game.h"
#include<iostream>

Board anotherBoard(57, 13), anotherAnotherBoard(79, 13);

Game::Game() : gameBoard(23,13)
{
    std::cout << "gameboard initialized. . . beep boop" << '\n';
    // newmap[{2,2}] = 'a';
}

void Game::display() {
  std::cout << "calling from Game display"; 
  std::cout << '\n';
  for(int i = 0; i < gameBoard.Yaxis; i++){
    for( int j = 0; j < gameBoard.Xaxis; j++){
      std::cout << i << "," << j << " : ";
      std::cout << gameBoard.boardY(i) << "," << gameBoard.boardY(j);
      std::cout << '\n';
    }
    std::cout << '\n';
  }
  gameBoard.drawBoard();
  anotherBoard.drawBoard();
  anotherAnotherBoard.drawBoard();
}


