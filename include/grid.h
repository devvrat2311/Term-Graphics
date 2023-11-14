#ifndef GRID_H
#define GRID_H

#include<vector>
#include<map>
#include<math.h>

float dist(int a, int b);

class Coord{
public:
    int x;
    int y;
    Coord();
    Coord(int x, int y);
};

bool operator==(Coord c1, Coord c2);
bool operator<(Coord c1, Coord c2);


class Board {

private:

int Xaxis;
int Yaxis;
std::vector< std::vector<Coord> > board;

public:

Board(int x, int y);
void drawBoard();

};

#endif

