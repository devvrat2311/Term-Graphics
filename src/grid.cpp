#include "grid.h"
#include<iostream>

//Start of member functions of the Coordinate(Coord) class

//Constructors for Coord
Coord::Coord(){
    x = 0;
    y = 0;
}
Coord::Coord(int x, int y){
    this -> x = x;
    this -> y = y;
}


//End of member functions of the Coordinate(Coord) class

//Starting of Board member functions and constructor




//Constructor function for the board
Board::Board(){
    Xaxis = 97;
    Yaxis = 33;
    Xlimit = Xaxis/2;
    Ylimit = Yaxis/2;
    board.resize(Yaxis, std::vector<char>(Xaxis));

    renderInitialSetup();
}




Board::Board(int x, int y)
{
    Xaxis = x;
    Yaxis = y;
    Xlimit = Xaxis/2;
    Ylimit = Yaxis/2;
    board.resize(Yaxis, std::vector<char>(Xaxis));

    renderInitialSetup();
}

void Board::renderInitialSetup() {
    for(int i = 0; i < Yaxis; i++){
        for(int j = 0; j < Xaxis; j++){
            //setting the border characters
            if(setBorders(i,j) || setOrigin(i,j)){
                continue;
            }
            else{
                board[i][j] = '.';
            }

        }
    }
}

bool Board::setBorders(int i, int j) {
    if ( Ylimit == abs(boardY(i)) || Xlimit == abs(boardX(j)) ){
        board[i][j] = '#';
        return 1;
    }
    else return 0;
}

bool Board::setOrigin(int i, int j){
    if( (boardY(i) == 0 and boardX(j) == 0) and !setBorders(i,j) ){
        board[i][j] = '*';
        return 1;
    }
    else return 0;
}

int Board::boardY(int a){
    return Ylimit - a;
}
int Board::boardX(int a){
    return a - Xlimit;
}

void Board::drawBoard() {
    std::cout << "X limit is: " << Xlimit << '\n';
    std::cout << "Y limit is: " << Ylimit << '\n';
    
    for(int i = 0; i < Yaxis; i++){
        for(int j = 0; j < Xaxis; j++){
            std::cout << board[i][j];
        }
        std::cout << '\n';
    }
}


//End of member functions of the Game Board(Board) class

