//
// gameState.cpp
//

#include "GameState.h"

void GameState::setWhite(vector <piece> x){
	white = x;
}

void GameState::setBlack(vector <piece> y){
	black = y;
}

void GameState::setBoardConfig(spaces[][] board){
	boardConfig = board;
}

vector <piece> GameState::getWhite(){
	return white;
}

vector <piece> GameState::getBlack(){
	return black;
}

spaces[][] GameState::getBoardConfig(){
	return boardConfig;
}

void GameState::print(){
	for(int i=0; i<boardConfig.size(); i++){
		//to be implemented
	}
}