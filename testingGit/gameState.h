//
//	GameState.h
//


#ifndef GameState_H
#define GameState_H

#include <iostream>
#include <vector>
#include <string>
#include "Piece.h"

using namespace std;

class GameState {
	
private:

	vector <Piece> white;
	vector <Piece> black;
	string boardConfig[0][0];
	
	
public:

    
    GameState gameState();
	void setWhite(vector <Piece> x);
	void setBlack(vector <Piece> y);
	void setBoardConfig(vector<vector<string> > board);
	
	vector <Piece> getWhite();
	vector <Piece> getBlack();
	string * getBoardConfig();
	void print();
};

#endif