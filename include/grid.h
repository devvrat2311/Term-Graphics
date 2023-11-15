#ifndef GRID_H
#define GRID_H

#include<vector>
#include<map>
#include<math.h>

float dist(int a, int b);

class Coord{
private:
    int x;
    int y;
public:
    Coord();
    Coord(int x, int y);
    int getx();
    int gety();
    void setx(int);
    void sety(int);
};

bool operator==(Coord c1, Coord c2);
bool operator<(Coord c1, Coord c2);


class Board {

private:

int Xaxis;
int Yaxis;
std::vector< std::vector<int> > board;

public:

Board(int x, int y);
void drawBoard();
int getHeight();
int getWidth();

};

#endif

