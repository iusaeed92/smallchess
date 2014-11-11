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

void GameState::setBoardConfig(vector<vector<string> > board){
	boardConfig = board;
}

vector <Piece> GameState::getWhite(){
	return white;
}

vector <Piece> GameState::getBlack(){
	return black;
}

string [][] GameState::getBoardConfig(){
	return boardConfig;
}

void GameState::print(){
	for(int i=0; i<boardConfig.size(); i++){
		//to be implemented
	}
}