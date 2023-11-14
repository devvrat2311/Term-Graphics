#ifndef GAME_H
#define GAME_H

#include "grid.h"
#include<map>

class Game {
private:
    std::map<Coord, char>new_map;

public:
    Board gameBoard;
//Constructor function for Game class
    Game(); //Initialize all necessary things for the gameBoard to load 

//try to make a Board component here
//going to check if the Board object initialized in the Game constructor can be 
//used throughout functions
    void display();

};


#endif
    