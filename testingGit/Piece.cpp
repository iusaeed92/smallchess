//
//  Piece.cpp
//  testingGit
//
//  Created by Ibrahim Saeed on 10/28/14.
//  Copyright (c) 2014 Ibrahim Saeed. All rights reserved.
//

#include "Piece.h"


//mutators:
void Piece::setPieceName(string s){
    name = s;
}
void Piece::setPieceColor(string s){
    color = s;
}
void Piece::setPieceWeight(int w){
    weight = w;
}
void Piece::setPieceCoordinates(int x, int y){
    pieceCordinates.first = x;
    pieceCordinates.second = y;
}

//accessors
string Piece::getPieceName(){
    
    return name;
    
}

string Piece::getPieceColor(){
    return color;
}

int Piece::getPieceWeight(){
 
    return weight;
}

pair<int, int> piece::getPieceCoodinates(){
    return pieceCordinates;
    
}


bool piece::isSameColor(gameState instance, pair<int, int> coordinates){
	
}






////////////////////////////////////////////
//SUBCLASSES

//Pawn

vector<pair<unsigned,unsigned>>  Pawn::generatePossibleMoves (gameState currentGameState){
	
	vector<pair<unsigned, unsigned>> possiblePawnMoves;
	pair<int, int> localCoord = pieceCordinates;
	
		//check if space ahead is empty if it is then place that spaces coordinate on vector
	if(currentGameState.getBoardConfig()[localCoord.first()-1][localCoord.second()] == empty){
		
		possiblePawnMoves.pushback(pair<localCoord.first()-1, localCoord.second()>)
		}
	
		//check the diagonal one space ahead, if it is opposing piece push on the vector
	if(currentGameState.getBoardConfig()[localCoord.first()-1, localCoord.second()+1] == //somespaceship}
	
		possiblePawnMoves.pushback(pair<localCoord.first()-1, localCoord.second()+1>)
	
		}
		
		//check other diagonal
	if(currentGameState.getBoardConfig()[localCoord.first()-1, localCoord.second()-1] == //somespaceship}
	
		possiblePawnMoves.pushback(pair<localCoord.first()-1, localCoord.second()-1>)
		
		}
		
	return possiblePawnMoves;
	}
	
	
	
	
	
	
	
	
//Bishop	
	
vector<pair<unsigned,unsigned>>  Bishop::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}
	
	
//Knight

vector<pair<unsigned,unsigned>>  Knight::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}
	
//Rook

vector<pair<unsigned,unsigned>>  Rook::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}
	
//Queen

vector<pair<unsigned,unsigned>>  Queen::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}
	
//King

vector<pair<unsigned,unsigned>>  King::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	vector<pair<unsigned, unsigned>> possiblePawnMoves;
	pair<int, int> localCoord = pieceCordinates;
	
		//check if space ahead is empty if it is then place that spaces coordinate on vector
	if(currentGameState.getBoardConfig()[localCoord.first()-1][localCoord.second()] == empty
		|| ){
		
		possiblePawnMoves.pushback(pair<localCoord.first()-1, localCoord.second()>)
		}
	
		//check the diagonal one space ahead, if so throw on the vector
	if(currentGameState.getBoardConfig()[localCoord.first()-1, localCoord.second()+1] == //somespaceship}
	
		possiblePawnMoves.pushback(pair<localCoord.first()-1, localCoord.second()+1>)
	
		}
		
		//check other diagonal
	if(currentGameState.getBoardConfig()[localCoord.first()-1, localCoord.second()-1] == //somespaceship}
	
		possiblePawnMoves.pushback(pair<localCoord.first()-1, localCoord.second()-1>)
		
		}
		
	return possiblePawnMoves;
	}

	}




