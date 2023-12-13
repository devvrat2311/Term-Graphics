#include "gameObjs.h"
#include "grid.h"
#include <iostream>
//parent class gameObject
gameObject::gameObject(int x, int y) {
	this->x = x;
	this->y = y;
}

void gameObject::draw(Board& board) {
	board.setCharAt(x,y,'*');
}



//Child object Shape
Shape::Shape(Board& board,int x, int y, int l, int b) : gameObject(x,y) {
	length = l;
	breadth = b;
	this->b = board;
}

Shape::~Shape() {

}

void Shape::draw() {
	for(int i = b.boardI(y); i < b.boardI(y - breadth); i++ ) {
		for( int j = b.boardJ(x); j < b.boardJ(x + length); j++) {
			b.board[i][j] = '*';
		}	
	}
}


Snake::Snake(int X, int Y, char direction) : gameObject(X,Y) {
	bodyX.push_back(X);
	bodyY.push_back(Y);
	switch(direction){
		case 'u':
			bodyX.push_back(bodyX[0]);
			bodyY.push_back(bodyY[0] - 1);

			bodyX.push_back(bodyX[0]);
			bodyY.push_back(bodyY[0] - 2);
			
			bodyX.push_back(bodyX[0]);
			bodyY.push_back(bodyY[0] - 3);
			break;
		default:
			break;
	}
}

void Snake::draw(Board &b) {
	for(int i = 0; i < bodyX.size(); i++) {
		b.setCharAt(bodyX[i], bodyY[i], 'o');
	}
}
