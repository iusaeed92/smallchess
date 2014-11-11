//
//  Piece.h
//  testingGit
//
//  Created by Ibrahim Saeed on 10/28/14.
//  Copyright (c) 2014 Ibrahim Saeed. All rights reserved.
//

#ifndef Piece_H
#define Piece_H

#include <stdio.h>
#include <string>
#include <utility> 
#include <vector>
#include "GameState.h"

using namespace std;

class Piece {
    
private:

    
    string name;
    string color;
    int weight;
    pair<int, int> pieceCordinates;
    
    
public:

	static bool isSameColor(GameState instance, pair<int, int> coordinates);
	
	Piece piece();

	//mutators:
    void setPieceName(string s);
    void setPieceColor(string s);
    void setPieceWeight(int w);
    void setPieceCoordinates(int x, int y);
    
    //accessors
    string getPieceName();
    string getPieceColor();
    int getPieceWeight();
    pair<int, int> getPieceCoodinates();
    
    
    //move
    //virtual void movePiece(
    
    
    
};



////////////////////////////////////////////
// SUBCLASSES

////////////////
//PAWN

class Pawn: public Piece{
	
public:
	
	
	vector<pair<unsigned,unsigned> > generatePossibleMoves (GameState currentBoard);
	
	
	 
};

//////////////////
//Bishop

class Bishop: public Piece{
	
public:
	
	
	vector<pair<unsigned,unsigned> > generatePossibleMoves (GameState currentBoard);
	
	
	 
};

//////////////////
//Knight

class Knight: public Piece{
	
public:
	
	
	vector<pair<unsigned,unsigned> > generatePossibleMoves (GameState currentBoard);
	
	
	 
};

//////////////////
//Castle


class Rook: public Piece{

	
public:
	
	
	vector<pair<unsigned,unsigned> > generatePossibleMoves (GameState currentBoard);
	
	
	 
};

/////////////////
//Queen

class Queen: public Piece{
	
public:
	
	
	vector<pair<unsigned,unsigned> > generatePossibleMoves (pair <unsigned, unsigned> pieceCoordinates, GameState currentGameState);
	
	
	 
};

////////////////
//King

class King: public Piece{
	
public:
	
	
	vector<pair<unsigned,unsigned> > generatePossibleMoves (GameState currentBoard);
	
	
	 
};


#endif /* defined(__testingGit__Piece__) */








