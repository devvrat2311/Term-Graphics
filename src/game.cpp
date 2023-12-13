#include"game.h"
#include "input.h"
#include "gameObjs.h"
#include<iostream>


Game::Game() : gameBoard(87,23)
{
	positionX = 0;
	positionY = -3;
	
	Running = true;
	std::cout << "gameboard constructed!!. . . beep boop" << '\n';
	log = "Welcome to Game: 󰜃";
}

//Game::display() -> is the set of instructions to 
//render the game each time the keyboard is pressed
void Game::display() {
	Shape s1(gameBoard,-4,-5, 3, 6);
	Shape *s = new Shape(gameBoard,5,5,2,2);
	Snake s2(positionX,positionY,'u');
	gameBoard.renderInitialSetup();
	s1.draw();
	s2.draw(gameBoard);
	s->draw();
//	gameBoard.setCharAt(positionX,positionY,'x');
	gameBoard.drawBoard();
	console();
}

//system("clear") being called here!
void Game::main() {
	while(Running) {
		system("clear");
		display();
		std::cout << "\nPress q to quit game! \n";

		char key = getch(); //getch() is the key to using system("clear") 
								//effevtively, i think.
			
		handleMovement(key);
		if(key != 'q'){
			log = "Last key pressed was:";
			log += key;
		}
		if(key == 'q') {
			Running = false;
		}

		}
}

void Game::console() {
	int Ylim = gameBoard.Yaxis;
	int Xlim = gameBoard.Xaxis;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < Xlim; j++) {
			if(i == 1){
				if(j == 1) 
					std::cout << log;
			}
			else{
				std::cout << "+";
			}
		}
		std::cout << '\n';
	}
}

void Game::handleMovement(char key) {
	switch(key) {
		case 'w':
			positionY++;
			break;
		case 's':
			positionY--;
			break;
		case 'd':
			positionX++;
			break;
		case 'a':
			positionX--;
			break;
		default:
			break;
	}
}

