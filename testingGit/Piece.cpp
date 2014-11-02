//
//  Piece.cpp
//  testingGit
//
//  Created by Ibrahim Saeed on 10/28/14.
//  Copyright (c) 2014 Ibrahim Saeed. All rights reserved.
//

#include "Piece.h"


//mutators:
void piece::setPieceName(string s){
    name = s;
}
void piece::setPieceColor(string s){
    color = s;
}
void piece::setPieceWeight(int w){
    weight = w;
}
void piece::setPieceCoordinates(int x, int y){
    pieceCordinates.first = x;
    pieceCordinates.second = y;
}

//accessors
string piece::getPieceName(){
    
    return name;
    
}

string piece::getPieceColor(){
    return color;
}

int piece::getPieceWeight(){
 
    return weight;
}

pair<int, int> piece::getPieceCoodinates(){
    return pieceCordinates;
    
}


////////////////////////////////////////////
//SUBCLASSES

//Pawn

vector<pair<unsigned,unsigned>>  Pawn::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}
	
	
	
	
	
	
	
	
//Bishop	
	
vector<pair<unsigned,unsigned>>  Bishop::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}
	
	
//Knight

vector<pair<unsigned,unsigned>>  Knight::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}
	
//Castle

vector<pair<unsigned,unsigned>>  Castle::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}
	
//Queen

vector<pair<unsigned,unsigned>>  Queen::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}
	
//King

vector<pair<unsigned,unsigned>>  King::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentBoard){
	
	//definition required

	}




