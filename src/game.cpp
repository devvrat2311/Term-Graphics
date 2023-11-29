#include"game.h"
#include "input.h"
#include<iostream>



Game::Game() : gameBoard(87,31)
{
		positionX = 0;
		positionY = -3;
		Running = true;
    std::cout << "gameboard constructed!!. . . beep boop" << '\n';
		log = "Welcome to Game: 󰜃";
}

void Game::display() {
		gameBoard.renderInitialSetup();
		gameBoard.setCharAt(positionX,positionY,'x');
		gameBoard.renderBox(2,2);
		gameBoard.drawBoard();
		console();
}

//system("clear") being called here!
void Game::gameRun() {
	while(Running) {
		system("clear");
		display();
		std::cout << "\n Press q to quit game! \n";

		char key = getch(); //getch() is the key to using system("clear") 
												//effevtively, i think.

		handleMovement(key);
		if(key != 'q'){
			log = "Last key pressed was:";
			log += key;
		}

		if(key == 'q') {
			log="Quit\n";
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
		case 'k':
			positionY++;
			break;
		case 'j':
			positionY--;
			break;
		case 'l':
			positionX++;
			break;
		case 'h':
			positionX--;
			break;
		default:
			break;
	}
}

