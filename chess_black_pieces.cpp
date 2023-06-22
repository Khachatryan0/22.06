#include "chess_pieces.cpp"
class queen_of_black : public queen
{
    public:
    queen_of_black(){};
    std :: string name = "Queen \n";
    std :: string color = "Black \n";
    std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~queen_of_black(){};
};

class king_of_black : public king
{
    public:
    king_of_black(){};
    std :: string name = "King \n";
    std :: string color = "Black \n";
        std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    }
    virtual ~king_of_black(){};
};
class bishop_of_black : public bishop
{
    public:
    bishop_of_black(){};
    std :: string name = "Bishop \n";
    std :: string color = "Black \n";
     std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~bishop_of_black(){};
};
class knight_of_black : public knight
{
    public:
    knight_of_black(){};
    std :: string name = "Knight \n";
    std :: string color = "Black \n"; 
    std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~knight_of_black(){};
};
class rook_of_black : public rook
{
    public:
    rook_of_black(){};
    std :: string name = "Rook \n";
    std :: string color = "Black \n";
    std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~rook_of_black(){};
};

class pawn_of_black : public pawn
{
    public:
    pawn_of_black(){};
    std :: string name = "Pawn \n";
    std :: string color = "Black \n";
    std :: string get_name() override 
    {
        return this->name;
    }
    std :: string get_color() override
    {
        return this->color;
    } 
    virtual ~pawn_of_black(){};
};


