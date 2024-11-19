#ifndef GAME_H
#define GAME_H

#include "grid.h"
#include "gameObjs.h"
#include <string>
#include<stack>

class Game {
protected:
	bool Running;
	Board gameBoard; //initializes the gameBoard used for the Game instance
	std::string log;
	//coordinates of the main character
	int positionX;
	int positionY;

public:
	Game(); //constructor for the gameBoard
	void logic(); //calls functions from the gameBoard to finally display the game
	void main();
	virtual void console(); //displays information about the key press, prompts etc
	void handleMovement(char key);

	std::stack<gameObject> objStack;
};
#endif
