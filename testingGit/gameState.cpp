//
// gameState.cpp
//

#include "gameState.h"

void gameState::setWhite(vector <piece> x){
	white = x;
}

void gameState::setBlack(vector <piece> y){
	black = y;
}

void gameState::setBoardConfig(spaces[][] board){
	boardConfig = board;
}

vector <piece> gameState::getWhite(){
	return white;
}

vector <piece> gameState::getBlack(){
	return black;
}

spaces[][] gameState::getBoardConfig(){
	return boardConfig;
}

void gameState::print(){
	for(int i=0; i<boardConfig.size(); i++){
		//to be implemented
	}
}