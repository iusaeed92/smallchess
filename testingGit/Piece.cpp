//
//  Piece.cpp
//  testingGit
//
//  Created by Ibrahim Saeed on 10/28/14.
//  Copyright (c) 2014 Ibrahim Saeed. All rights reserved.
//

#include<iostream>
#include<string>
#include "Piece.h"

using namespace std;

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

pair<int, int> Piece::getPieceCoodinates(){
    return pieceCordinates;
    
}


bool Piece::isSameColor(GameState instance, pair<int, int> coordinates){
	
	if(instance[coordinates.first()][coordinates.second()].first == pieceColor){
		return true;
	}
	else{
		return false;
	}


int diagonalMoves(GameState instance, pair<int, int> coordinates, int direction){
	pair<int, int> localCoord;
	int movesSoFar = 0;
	
	if(direction == 1){
		localCoord.first() = localCoord.first()-1;
		localCoord.second() = localCoord.second()+1;
		
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != empty){
			return movesSoFar;
		}
		while(instance.getBoardConfig()[localCoord.first(), localCoord.second()] == empty){
	
			movesSoFar = movesSoFar+1;
			localCoord.first() = localCoord.first()-1;
			localCoord.second() = localCoord.second()+1;
			}
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != outofBounds){
		
			if(.isSameColor(currentGameState, pair<localCoord.first(),localCoord.second()>) == false)
				movesSoFar =  movesSoFar+1;
			
		}
		
		return movesSoFar;
	}

	if(direction == 2){
		localCoord.first() = localCoord.first()-1;
		localCoord.second() = localCoord.second()-1;
		
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != empty){
			return movesSoFar;
		}
		while(instance.getBoardConfig()[localCoord.first(), localCoord.second()] == empty){
	
			movesSoFar = movesSoFar+1;
			localCoord.first() = localCoord.first()-1;
			localCoord.second() = localCoord.second()-1;
			}
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != outofBounds){
		
			if(.isSameColor(currentGameState, pair<localCoord.first(),localCoord.second()>) == false)
				movesSoFar =  movesSoFar+1;
			
		}
		
		return movesSoFar;
	}

	if(direction == 3){
		localCoord.first() = localCoord.first()+1;
		localCoord.second() = localCoord.second()-1;
		
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != empty){
			return movesSoFar;
		}
		while(instance.getBoardConfig()[localCoord.first(), localCoord.second()] == empty){
	
			movesSoFar = movesSoFar+1;
			localCoord.first() = localCoord.first()+1;
			localCoord.second() = localCoord.second()-1;
			}
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != outofBounds){
		
			if(.isSameColor(currentGameState, pair<localCoord.first(),localCoord.second()>) == false)
				movesSoFar =  movesSoFar+1;
			
		}
		
		return movesSoFar;
	}

	if(direction == 4){
		localCoord.first() = localCoord.first()+1;
		localCoord.second() = localCoord.second()+1;
		
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != empty){
			return movesSoFar;
		}
		while(instance.getBoardConfig()[localCoord.first(), localCoord.second()] == empty){
	
			movesSoFar = movesSoFar+1;
			localCoord.first() = localCoord.first()+1;
			localCoord.second() = localCoord.second()+1;
			}
		
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != outofBounds){
		
			if(.isSameColor(currentGameState, pair<localCoord.first(),localCoord.second()>) == false)
				movesSoFar =  movesSoFar+1;
			
		}
		
		return movesSoFar;
	}
}


int straightMoves(gameState instance, pair<int, int> coordinates, int direction){
	pair<int, int> localCoord;
	int movesSoFar = 0;
	
	if(direction == 1){
		localCoord.first() = localCoord.first()-1;
		
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != empty){
			return movesSoFar;
		}
		while(instance.getBoardConfig()[localCoord.first(), localCoord.second()] == empty){
	
			movesSoFar = movesSoFar+1;
			localCoord.first() = localCoord.first()-1;
			
			}
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != outofBounds){
		
			if(.isSameColor(currentGameState, pair<localCoord.first(),localCoord.second()>) == false)
				movesSoFar =  movesSoFar+1;
			
		}
		
		return movesSoFar;
	}

	if(direction == 2){
		localCoord.first() = localCoord.first()+1;
		
		
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != empty){
			return movesSoFar;
		}
		while(instance.getBoardConfig()[localCoord.first(), localCoord.second()] == empty){
			movesSoFar = movesSoFar+1;
			localCoord.first() = localCoord.first()+1;
			
			}
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != outofBounds){
		
			if(.isSameColor(currentGameState, pair<localCoord.first(),localCoord.second()>) == false)
				movesSoFar =  movesSoFar+1;
			
		}
		
		
		return movesSoFar;
	}

	if(direction == 3){
		
		localCoord.second() = localCoord.second()-1;
		
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != empty){
			return movesSoFar;
		}
		while(instance.getBoardConfig()[localCoord.first(), localCoord.second()] == empty){
	
			movesSoFar = movesSoFar+1;
			localCoord.second() = localCoord.second()-1;
			}
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != outofBounds){
		
			if(.isSameColor(currentGameState, pair<localCoord.first(),localCoord.second()>) == false)
				movesSoFar =  movesSoFar+1;
			
		}
		
		
		return movesSoFar;
	}

	if(direction == 4){
		localCoord.second() = localCoord.second()+1;
		
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != empty){
			return movesSoFar;
		}
		while(instance.getBoardConfig()[localCoord.first(), localCoord.second()] == empty){
	
			movesSoFar = movesSoFar+1;
			
			localCoord.second() = localCoord.second()+1;
			}
		if(instance.getBoardConfig()[localCoord.first(), localCoord.second()] != outofBounds){
		
			if(.isSameColor(currentGameState, pair<localCoord.first(),localCoord.second()>) == false)
				movesSoFar =  movesSoFar+1;
			
		}
		
		return movesSoFar;
	}
}









////////////////////////////////////////////
//SUBCLASSES

//Pawn

vector<pair<unsigned,unsigned>>  Pawn::generatePossibleMoves (gameState currentGameState){
	
	vector<pair<unsigned, unsigned>> possiblePawnMoves;
	pair<int, int> localCoord = pieceCoordinates;
	
		//check if space ahead is empty if it is then place that spaces coordinate on vector
	if(currentGameState.getBoardConfig()[localCoord.first()-1][localCoord.second()] == empty){
		
		possiblePawnMoves.pushback(pair<localCoord.first()-1, localCoord.second()>);
		}
	
		//check the diagonal one space ahead, if it is opposing piece push on the vector
	if(.isSameColor(currentGameState, pair<localCoord.first()-1,localCoord.second()+1>) == false){
	
		possiblePawnMoves.pushback(pair<localCoord.first()-1, localCoord.second()+1>);
	
		}
		
		//check other diagonal
	if(.isSameColor(currentGameState, pair<localCoord.first()-1,localCoord.second()-1>) == false){
	
		possiblePawnMoves.pushback(pair<localCoord.first()-1, localCoord.second()-1>);
		
		}
		
	return possiblePawnMoves;
	}
	
	
	
	
	
	
	
/////////////////	
//Bishop	
	
vector<pair<unsigned,unsigned>>  Bishop::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentGameState){
	vector<pair<unsigned, unsigned>> possibleBishopMoves;
	
	int movesDiagUpRight = diagonalMoves(currentGameState, pieceCoordinates, int 1);
	int movesDiagUpLeft = diagonalMoves(currentGameState, pieceCoordinates, int 2);
	int movesDiagDownLeft = diagonalMoves(currentGameState, pieceCoordinates, int 3);
	int movesDiagDownRight = diagonalMoves(currentGameState, pieceCoordinates, int 4);
	pair<int, int> localCoord = pieceCoordinates;
	
	
	
	for(int i = 0; movesDiagUpRight; i++){
		localCoord.first() = localCoord.first()-1;
		localCoord.second() = localCoord.second()+1;
		possibleBishopMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesDiagUpLeft; i++){
		
		localCoord.first() = localCoord.first()-1;
		localCoord.second() = localCoord.second()-1;
		possibleBishopMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesDiagDownLeft; i++){
		
		localCoord.first() = localCoord.first()+1;
		localCoord.second() = localCoord.second()-1;
		possibleBishopMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesDiagDownRight; i++){
		
		localCoord.first() = localCoord.first()+1;
		localCoord.second() = localCoord.second()+1;
		possibleBishopMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	return possibleBishopMoves;
	
	
	
	

	}
	
//////////////////	
//Knight

vector<pair<unsigned,unsigned>>  Knight::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentGameState){
	
	//-1,+2
	if(currentGameState.getBoardConfig()[localCoord.first()-1][localCoord.second()+2] == empty
		|| .isSameColor(currentGameState, pair<localCoord.first()-1,localCoord.second()+2>) == false){
		
		possibleKnightMoves.pushback(pair<localCoord.first()-1, localCoord.second()+2>);
		}
	
	//+1,+2
	if(currentGameState.getBoardConfig()[localCoord.first()+1][localCoord.second()+2] == empty
		|| .isSameColor(currentGameState, pair<localCoord.first()+1,localCoord.second()>) == false){
		
		possibleKnightMoves.pushback(pair<localCoord.first()+1, localCoord.second()+2>);
		}
	//-1, -2
	if(currentGameState.getBoardConfig()[localCoord.first()-1][localCoord.second()-2] == empty
		|| .isSameColor(currentGameState, pair<localCoord.first()-1,localCoord.second()-2>) == false){
		
		possibleKnightMoves.pushback(pair<localCoord.first()-1, localCoord.second()-2>);
		}
	
	//-1, -2
	if(currentGameState.getBoardConfig()[localCoord.first()-1][localCoord.second-2] == empty
		|| .isSameColor(currentGameState, pair<localCoord.first()-1,localCoord.second()-2>) == false){
		
		possibleKnightMoves.pushback(pair<localCoord.first()-1, localCoord.second()-2>);
		}
	
	//+2, +1
    if(currentGameState.getBoardConfig()[localCoord.first()+2][localCoord.second()+1] == empty
		|| .isSameColor(currentGameState, pair<localCoord.first()+2,localCoord.second()+1>) == false){
		
		possibleKnightMoves.pushback(pair<localCoord.first()+2, localCoord.second()+1>);
		}
	
	//+2, -1
	if(currentGameState.getBoardConfig()[localCoord.first()+2][localCoord.second()-1] == empty
		|| .isSameColor(currentGameState, pair<localCoord.first()+2,localCoord.second()-1>) == false){
		
		possibleKnightMoves.pushback(pair<localCoord.first()+2, localCoord.second()-1>);
		}
	//-2, +1
	if(currentGameState.getBoardConfig()[localCoord.first()-2][localCoord.second()+1] == empty
		|| .isSameColor(currentGameState, pair<localCoord.first()-2,localCoord.second()+1>) == false){
		
		possibleKnightMoves.pushback(pair<localCoord.first()-2, localCoord.second()+1>);
		}
	//-2, -1
	if(currentGameState.getBoardConfig()[localCoord.first()-2][localCoord.second()-1] == empty
		|| .isSameColor(currentGameState, pair<localCoord.first()-2,localCoord.second()-1>) == false){
		
		possibleKnightMoves.pushback(pair<localCoord.first()-2, localCoord.second()-1>);
		}
	
	return possibleKnightMoves
	}

////////////////	
//Rook

vector<pair<unsigned,unsigned>>  Rook::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentGameState){
	
	vector<pair<unsigned, unsigned>> possibleRookMoves;
	
	int movesUp = straightMoves(currentGameState, pieceCoordinates, int 1);
	int movesDown = straightlMoves(currentGameState, pieceCoordinates, int 2);
	int movesLeft = straightMoves(currentGameState, pieceCoordinates, int 3);
	int movesRight = straightMoves(currentGameState, pieceCoordinates, int 4);
	pair<int, int> localCoord = pieceCoordinates;
	
	for(int i = 0; movesUp; i++){
		localCoord.first() = localCoord.first()-1;
		possibleRookMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesDown; i++){
		
		localCoord.first() = localCoord.first()+1;
		possibleRookMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesLeft; i++){
		
	
		localCoord.second() = localCoord.second()-1;
		possibleRookMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesRight; i++){
		
		
		localCoord.second() = localCoord.second()+1;
		possibleRookMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	return possibleRookMoves;
	
	
	
	

	}
	}
///////////////	
//Queen

vector<pair<unsigned,unsigned>>  Queen::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentGameState){
	
	vector<pair<unsigned, unsigned>> possibleQueenMoves;
	
	int movesDiagUpRight = diagonalMoves(currentGameState, pieceCoordinates, int 1);
	int movesDiagUpLeft = diagonalMoves(currentGameState, pieceCoordinates, int 2);
	int movesDiagDownLeft = diagonalMoves(currentGameState, pieceCoordinates, int 3);
	int movesDiagDownRight = diagonalMoves(currentGameState, pieceCoordinates, int 4);
	pair<int, int> localCoord = pieceCoordinates;
	
	
	
	for(int i = 0; movesDiagUpRight; i++){
		localCoord.first() = localCoord.first()-1;
		localCoord.second() = localCoord.second()+1;
		possibleQueenMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesDiagUpLeft; i++){
		
		localCoord.first() = localCoord.first()-1;
		localCoord.second() = localCoord.second()-1;
		possibleQueenMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesDiagDownLeft; i++){
		
		localCoord.first() = localCoord.first()+1;
		localCoord.second() = localCoord.second()-1;
		possibleQueenMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesDiagDownRight; i++){
		
		localCoord.first() = localCoord.first()+1;
		localCoord.second() = localCoord.second()+1;
		possibleQueenMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	vector<pair<unsigned, unsigned>> possibleRookMoves;
	
	int movesUp = straightMoves(currentGameState, pieceCoordinates, int 1);
	int movesDown = straightlMoves(currentGameState, pieceCoordinates, int 2);
	int movesLeft = straightMoves(currentGameState, pieceCoordinates, int 3);
	int movesRight = straightMoves(currentGameState, pieceCoordinates, int 4);
	pair<int, int> localCoord = pieceCoordinates;
	
	for(int i = 0; movesUp; i++){
		localCoord.first() = localCoord.first()-1;
		possibleQueenMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesDown; i++){
		
		localCoord.first() = localCoord.first()+1;
		possibleQueenMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesLeft; i++){
		
	
		localCoord.second() = localCoord.second()-1;
		possibleQueenMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	localCoord = pieceCoordinates;
	for(int i = 0; movesRight; i++){
		
		
		localCoord.second() = localCoord.second()+1;
		possibleQueenMoves.pushback(pair<localCoord.first(), localCoord.second()>);
	}
	
	return possibleRookMoves;

	}

/////////////	
//King

vector<pair<unsigned,unsigned>>  King::generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, gameState currentGameState){
	
	vector<pair<unsigned, unsigned>> possiblePawnMoves;
	pair<int, int> localCoord = pieceCordinates;
	
		//check if space ahead is empty if it is then place that spaces coordinate on vector
	if(currentGameState.getBoardConfig()[localCoord.first()-1][localCoord.second()] == empty 
		|| .isSameColor(currentGameState, pair<localCoord.first()-1,localCoord.second()>) == false){
		
		possibleKingMoves.pushback(pair<localCoord.first()-1, localCoord.second()>);
		}
		
		//check if space behind is empty
	if(currentGameState.getBoardConfig()[localCoord.first()+1][localCoord.second()] == empty 
		|| .isSameColor(currentGameState, pair<localCoord.first()+1,localCoord.second()>) == false){
		
		possibleKingMoves.pushback(pair<localCoord.first()+1, localCoord.second()>);
		}
		
		//check left diagonal(forward) 
	if(currentGameState.getBoardConfig()[localCoord.first()-1, localCoord.second()+1] != empty 
		&& .isSameColor(currentGameState, pair<localCoord.first()-1,localCoord.second()+1>) == false)
	
		possibleKingMoves.pushback(pair<localCoord.first()-1, localCoord.second()+1>);
		}
		
		//check left diagonal(foward)
	if(currentGameState.getBoardConfig()[localCoord.first()-1, localCoord.second()-1] != empty
		&& .isSameColor(currentGameState, pair<localCoord.first()-1,localCoord.second()+1>) == false)
	
		possibleKingMoves.pushback(pair<localCoord.first()-1, localCoord.second()-1>);
		}
		
		//check back left diagonal
	if(currentGameState.getBoardConfig()[localCoord.first()+1, localCoord.second()-1] != empty
		&& .isSameColor(currentGameState, pair<localCoord.first()+1,localCoord.second()-1>) == false)
	
		possibleKingMoves.pushback(pair<localCoord.first()+1, localCoord.second()-1>);
		}
	
		//check back right diagonal
	if(currentGameState.getBoardConfig()[localCoord.first()+1, localCoord.second()+1] != empty
		&& .isSameColor(currentGameState, pair<localCoord.first()+1,localCoord.second()+1>) == false)
	
		possibleKingMoves.pushback(pair<localCoord.first()+1, localCoord.second()+1>);
		}
		
	return possibleKingMoves;
	}

	}




