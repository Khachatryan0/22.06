#ifndef _CHESS_PIECES_CPP_
#define _CHESS_PIECES_CPP_
#include "abs_class_piece.cpp"
class queen : public chess_piece
{
    public:
    queen(){};
    std :: string move() override
    {
        return "Queen can move diagonally, vertically and horizontally \n";
    } 
    virtual ~queen(){};
};
class king : public chess_piece
{
    public:
    king(){};
    std :: string move() override 
    {
        return "King can move diagonally, vertically and horizontally but only one square \n";
    } 
    virtual ~king(){};
};

class bishop : public chess_piece
{
    public:
    bishop(){};
    std :: string move() override 
    {
        return "Bishop can only move diagonally\n";
    } 
    virtual ~bishop(){};
};

class knight : public chess_piece
{
    public:
    knight(){};
    std :: string move() override 
    {
        return "The knight moves in an L-shape\n";
    } 
    virtual ~knight(){};
};

class rook : public chess_piece
{
    public:
    rook(){};
    std :: string move() override 
    {
        return "The rook moves like a +(plus) sign\n";
    } 
    virtual ~rook(){};
};

class pawn : public chess_piece
{
    public:
    pawn(){};
    std :: string move() override 
    {
        return "The pawn can move forward one or two squares\n";
    } 
    virtual ~pawn(){};
};
#endif