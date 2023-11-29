#include "grid.h"
#include<iostream>
//Starting of Board member functions and constructor

Board::Board(int x , int y )
{
    Xaxis = x;
    Yaxis = y;
    Xlimit = Xaxis/2;
    Ylimit = Yaxis/2;
    board.resize(Yaxis, std::vector<char>(Xaxis));

}

void Board::renderInitialSetup() {
    for(int i = 0; i < Yaxis; i++){
        for(int j = 0; j < Xaxis; j++){
            //setting the border characters
						board[i][j] = ' ';
						setAxis(i,j);
						setBorders(i,j);
        }
    }
}

void Board::renderLineHorizontal(int x, int y, int len) {
    int i = boardI(y);
    for(int j = boardJ(x); j < boardJ(x + len); j++) {
        board[i][j] = '-';
    }
}

void Board::renderBox(int x, int y, int len) {
    for(int i = boardI(y); i < boardI(y - len); i++) {
        for(int j = boardJ(x); j < boardJ(x + len); j++) {
            board[i][j] = '.';
        }
    }
}

bool Board::setBorders(int i, int j) {
    if ( Ylimit == abs(boardY(i)) || Xlimit == abs(boardX(j)) ){
        board[i][j] = '#';
        return 1;
    }
		return 0;
}

bool Board::setAxis(int i, int j) {
	setCharAt(i,j,'o',0,0);
	if(boardY(i)!=0)
		setCharAt(i,j,'|',0,boardY(i));
	if(boardX(j)!=0)
		setCharAt(i,j,'-',boardX(j),0);
	
	return 0;
}

bool Board::setCharAt(int i, int j, char c, int x, int y){
    if(boardY(i) == y and boardX(j) == x){
        board[i][j] = c;
        return 1;
    }
		return 0;
}

void Board::setCharAt(int x, int y, char c){
    board[boardI(y)][boardJ(x)] = c;
}

int Board::boardY(int i){
    return Ylimit - i;
}
int Board::boardX(int j){
    return j - Xlimit;
}
int Board::boardI(int y){
    return -y + Ylimit;
}
int Board::boardJ(int x){
    return x + Xlimit;
}

void Board::drawBoard() {

    
    for(int i = 0; i < Yaxis; i++){
        for(int j = 0; j < Xaxis; j++){
            std::cout << board[i][j];
        }
        std::cout << '\n';
    }
}


//End of member functions of the Game Board(Board) class

