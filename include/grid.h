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

int Xaxis;
int Yaxis;

int Xlimit; 
int Ylimit; 

std::vector< std::vector<char>> board;

Board();
Board(int x, int y);

int boardX(int );
int boardY(int );

void drawBoard();
void renderInitialSetup();

};

#endif

