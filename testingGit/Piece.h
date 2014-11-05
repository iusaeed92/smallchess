//
//  Piece.h
//  testingGit
//
//  Created by Ibrahim Saeed on 10/28/14.
//  Copyright (c) 2014 Ibrahim Saeed. All rights reserved.
//

#ifndef __testingGit__Piece__
#define __testingGit__Piece__

#include <stdio.h>
#include <string>
#include <utility> 
#include <vector>
#include <gameState.h>


using namespace std;

class piece {
    
private:

    
    string name;
    string color;
    int weight;
    pair<int, int> pieceCordinates;
    
    
public:
    
    //
	
	bool isSameColor(gameState instance, pair<int, int> coordinates);
	
	
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

class Pawn: public piece{
	
public:
	
	
	vector<pair<unsigned,unsigned>> generatePossibleMoves (gameState currentBoard);
	
	
	 
};

//////////////////
//Bishop

class Bishop: public piece{
	
public:
	
	
	vector<pair<unsigned,unsigned>> generatePossibleMoves (gameState currentBoard);
	
	
	 
};

//////////////////
//Knight

class Knight: public piece{
	
public:
	
	
	vector<pair<unsigned,unsigned>> generatePossibleMoves (gameState currentBoard);
	
	
	 
};

//////////////////
//Castle

class Rook: public piece{
	
public:
	
	
	vector<pair<unsigned,unsigned>> generatePossibleMoves (gameState currentBoard);
	
	
	 
};

/////////////////
//Queen

class Queen: public piece{
	
public:
	
	
	vector<pair<unsigned,unsigned>> generatePossibleMoves (gameState currentBoard);
	
	
	 
};

////////////////
//King

class King: public piece{
	
public:
	
	
	vector<pair<unsigned,unsigned>> generatePossibleMoves (gameState currentBoard);
	
	
	 
};


#endif /* defined(__testingGit__Piece__) */








