//
// GameState.cpp
//

#include "GameState.h"

void GameState::setWhite(vector <Piece> x){
	white = x;
}

void GameState::setBlack(vector <Piece> y){
	black = y;
}

void GameState::setBoardConfig(Spaces[][] board){
	boardConfig = board;
}

vector <Piece> GameState::getWhite(){
	return white;
}

vector <Piece> GameState::getBlack(){
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