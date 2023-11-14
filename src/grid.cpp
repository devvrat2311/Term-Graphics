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

//Operator '==' to check equality between two Coordinates
bool Coord::operator==(Coord c){
    if(this->x == c.x and this->y == c.y)
        return true;
    else
        return false;
}


//End of member functions of the Coordinate(Coord) class


//Start of member functions of the Game Board(Board) class

//Constructor function for the board
Board::Board(int x, int y)
{
    Xaxis = x;
    Yaxis = y;
    this->board.resize(Yaxis, std::vector<Coord>(Xaxis));

    std::cout << "initializing the board now. . ." << "\n";
    for(int i = 0; i < Yaxis; i++){
        for(int j = 0; j < Xaxis; j++){

            board[i][j].y = Yaxis/2 - i;
            board[i][j].x = (j - Xaxis/2);
            // board[i][j]((j - Xaxis/2), (Yaxis/2 - i));

        }
    }
}

//draws the board's base skeleton values
void Board::drawBoard() {
    Coord origin;
    for(int i = 0; i < Yaxis; i++){
        for(int j = 0; j < Xaxis; j++){
            // std::cout << board[i][j].x << board[i][j].y << "  ";
            if(board[i][j].x == 0 and  board[i][j].y!= 0){
                std::cout << "|";
            }

            else if(board[i][j].x != 0 and  board[i][j].y== 0){
                std::cout << '-' ;
            }

            else if(board[i][j] == origin){
                std::cout << 'o' ;
            }

            // negative y axis is colored
            else{
                std::cout << ' ' ;
            }
        }
        std::cout << std::endl;
    }
}


//End of member functions of the Game Board(Board) class

