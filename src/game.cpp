#include"game.h"
#include "input.h"
#include "gameObjs.h"
#include<iostream>


Game::Game() : gameBoard(49,23)
{
	positionX = 0;
	positionY = -3;
	
	Running = true;
	std::cout << "gameboard constructed!!. . . beep boop" << '\n';
	log = "Welcome to Game: 󰜃";

}

//Game::logic() -> is the set of instructions to 
//render the game each time the keyboard is pressed
//Something that i hate about how logic runs again everytime 
//that a new key is pressed, i mean yeah it is supposed to update the board 
//but i want to find a solution to it 
void Game::logic() {

	

	Board* g = &gameBoard; 
	Board* h = new Board(23,23);

	g->renderInitialSetup();
	h->renderInitialSetup();

	Shape s(g, 4, 4);
	Shape s2(h,positionY,positionX);
	Shape player(g, positionX, positionY, 2, 2);
	s.draw();
	objStack.push(s);
	objStack.push(s2);
	objStack.push(player);

	std::cout << std::endl; 


	player.draw();


	g->drawBoard();
	console();
}

//system("clear") being called here!
void Game::main() {
	while(Running) {
		system("clear");
		logic();
		std::cout << "\nPress q to quit game! \n";

		char key = getch(); //getch() is the key to using system("clear") 
								//effevtively, i think.
			
		handleMovement(key);
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
		case 'q':
			Running=false;
			break;
		default:
			break;
	}
}

