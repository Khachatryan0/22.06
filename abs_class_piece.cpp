#ifndef _ABS_CLASS_PIECE_CPP_
#define _ABS_CLASS_PIECE_CPP_
#include <iostream>
#include <string>
class chess_piece
{
    public:
    chess_piece(){};
    std :: string name;
    std :: string color;
    virtual std :: string move() = 0;
    virtual std :: string get_name() = 0;
    virtual std :: string get_color() = 0;
    virtual ~chess_piece(){}
};
#endif