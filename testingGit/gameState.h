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
	Spaces[][] boardConfig;
	
	
public:

    
    gameState();
	void setWhite(vector <Piece> x);
	void setBlack(vector <Piece> y);
	void setBoardConfig(Spaces[][] board);
	
	vector <Piece> getWhite();
	vector <Piece> getBlack();
	Spaces[][] getBoardConfig();
	void print();
};

#endif