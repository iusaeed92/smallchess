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


using namespace std;

class piece {
    
private:

    
    string name;
    string color;
    int weight;
    pair<int, int> pieceCordinates;
    
    
public:
    
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



#endif /* defined(__testingGit__Piece__) */
