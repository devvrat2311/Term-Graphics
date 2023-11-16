#include"game.h"
#include<iostream>


Game::Game() : gameBoard(77,23)
{
    std::cout << "gameboard initialized. . . beep boop" << '\n';
    // newmap[{2,2}] = 'a';
}

void Game::display() {
  std::cout << "calling from Game display \n"; 
  // for(int i = 0; i < gameBoard.Yaxis; i++){
  //   for( int j = 0; j < gameBoard.Xaxis; j++){
  //     std::cout << i << "," << j << " : ";
  //     std::cout << gameBoard.boardY(i) << "," << gameBoard.boardY(j);
  //     std::cout << '\n';
  //   }
  //   std::cout << '\n';
  // }
  gameBoard.drawBoard();
}


