#ifndef GAMEOBJS_H
#define GAMEOBJS_H

#include "grid.h"

class gameObject {
public:
    int x;
    int y;
    
    gameObject(int, int);
    virtual void draw(Board& board);
};

class Shape : public gameObject {
public:
	Board* b;
	int length;
	int breadth;
	Shape(Board* ,int, int, int = 3, int = 3);
	~Shape();
	void draw(void);
};

class Snake : public gameObject {
public:
	Snake(int , int , char );
	int tails;
	std::vector<int> bodyX;
	std::vector<int> bodyY;
	char direction;
	void draw(Board& board);
};

#endif
