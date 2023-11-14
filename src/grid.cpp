#include "grid.h"
#include<iostream>

//a dist function to calculate the euclidian dist between two points
float dist(int a, int b){
    return sqrt(pow(a,2) + pow(b,2));
}
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
bool operator<(Coord c1, Coord c2){
    return (dist(c1.x, c2.y) < dist(c2.x, c2.y));
}

bool operator==(Coord c1, Coord c2){
    return (c1.x == c2.x && c1.y == c2.y);
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
//I will not delete this function until i get the rendering in the Game class right
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

