#ifndef GRID_H
#define GRID_H

#include<vector>
#include<map>
#include<math.h>


class Coord{
public:
    int x;
    int y;
    Coord();
    Coord(int x, int y);
};

class Board {
public:
int count;  //dummy variable to track if functions are being called properly and debugging
int Xaxis;  //Total Width of the board
int Yaxis;  //Total Height of the board

int Xlimit; //The distance from origin of the board to end of board x-axis
int Ylimit; //The distance from origin of the board to end of board y-axis

std::vector< std::vector<char>> board; //The two dimensional char vector[Yaxis][Xaxis] representing the board

Board();    //Constructor Function for the default board
Board(int x, int y);    //Constructor Function for board[y][x] where y represents the height and x represents the width 

int boardX(int ); //Function which translates the j value in the vector(2d array) of board[i][j] to its x coord wrt board[0][0] which is the dead-centre of the board
int boardY(int ); //Function which translates the i value in the vector(2d array) of board[i][j] to its y coord wrt board[0][0] which is the dead-centre of the board
int boardJ(int ); //Function which translates the x value in the vector(2d array) of board[i][j] to its j coord wrt board[0][0] which is the dead-centre of the board
int boardI(int ); //Function which translates the y value in the vector(2d array) of board[i][j] to its i coord wrt board[0][0] which is the dead-centre of the board

void drawBoard(); //Simple function which just draws the board using a double for loop i.e. board[i][j]
void renderInitialSetup(); //calls the functions required to set up the board (setBorders() and setOrigin())
bool setBorders(int,int); //sets the borders of the board vector to the character '#'
bool setOrigin (int,int); //draws the axis of the board along with the origin with the char 'o'
bool setAxis (int,int);
void callRender(int,int,bool&);
bool setCharAt(int,int,char,int,int);
void setCharAt(int,int,char);

};

#endif

