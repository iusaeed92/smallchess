//
//	GameState.h
//


#ifndef __testingGit__GameState__
#define __testingGit__GameState__

#include <iostream>
#include <vector>
#include "Piece.h"

using namespace std;

class GameState {
	
private:

	vector <Piece> white;
	vector <Piece> black;
	string[][] boardConfig;
	
	
public:

    
    gameState();
	void setWhite(vector <Piece> x);
	void setBlack(vector <Piece> y);
	void setBoardConfig(string[][] board);
	
	vector <Piece> getWhite();
	vector <Piece> getBlack();
	string[][] getBoardConfig();
	void print();
};

#endif