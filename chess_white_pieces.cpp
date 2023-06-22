#include "chess_pieces.cpp"
class queen_of_white : public queen
{
    public:
    queen_of_white(){};
    std :: string name = "Queen \n";
    std :: string color = "White \n";
    std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~queen_of_white(){};
};

class king_of_white : public king
{
    public:
    king_of_white(){};
    std :: string name = "King \n";
    std :: string color = "White \n";
        std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    }
    virtual ~king_of_white(){};
};
class bishop_of_white : public bishop
{
    public:
    bishop_of_white(){};
    std :: string name = "Bishop \n";
    std :: string color = "white \n";
     std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~bishop_of_white(){};
};
class knight_of_white : public knight
{
    public:
    knight_of_white(){};
    std :: string name = "Knight \n";
    std :: string color = "white \n"; 
    std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~knight_of_white(){};
};
class rook_of_white : public rook
{
    public:
    rook_of_white(){};
    std :: string name = "Rook \n";
    std :: string color = "white \n";
    std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~rook_of_white(){};
};

class pawn_of_white : public pawn
{
    public:
    pawn_of_white(){};
    std :: string name = "Pawn \n";
    std :: string color = "white \n";
    std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~pawn_of_white(){};
};


