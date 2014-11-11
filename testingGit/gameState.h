//
//	GameState.h
//

#include <iostream>
#include <vector>
#include "Piece.h"


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
	vector <vector <string > > boardConfig;
	
	
public:

    
	GameState gameState();
	void setWhite(vector <Piece> x);
	void setBlack(vector <Piece> y);
	void setBoardConfig(vector<vector<string> > board);
	
	vector <Piece> getWhite();
	vector <Piece> getBlack();
	vector<vector<string> > getBoardConfig();
	void print();
};

#endif
