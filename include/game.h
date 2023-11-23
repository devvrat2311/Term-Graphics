#ifndef GAME_H
#define GAME_H

#include "grid.h"
#include<map>

class Game {
public:
    Board gameBoard; //initializes the gameBoard used for the Game instance
    Game(); //constructor for the gameBoard  
    void display(); //calls functions from the gameBoard to finally display the game

};


#endif
