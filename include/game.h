#ifndef GAME_H
#define GAME_H

#include "grid.h"
#include<string>
#include<map>

class Game {
private:
		bool Running;
    Board gameBoard; //initializes the gameBoard used for the Game instance
		std::string log;
		int positionX;
		int positionY;

public:
    Game(); //constructor for the gameBoard  
    void display(); //calls functions from the gameBoard to finally display the game
		void gameRun();
		void console();
		void handleMovement(char key);

};


#endif
