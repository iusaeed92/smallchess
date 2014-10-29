//
//	gameState.h
//

#ifndef __testingGit__gameState__
#define __testingGit__gameState__

#include <iostream>
#include <vector>

using namespace std;

class gameState {
	
private:

	vector <piece> white;
	vector <piece> black;
	spaces[][] boardConfig;
	
	
public:

	void setWhite(vector <piece> x);
	void setBlack(vector <piece> y);
	void setBoardConfig(spaces[][] Board);
	
	vector <piece> getWhite;
	vector <piece> getBlack;
	spaces[][] getBoardConfig;
}