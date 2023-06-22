#include "chess_black_pieces.cpp"
#include "chess_white_pieces.cpp"
int main(int argc, char** argv)
{
    chess_piece* Black_Queen = new queen_of_black;
    std :: cout << Black_Queen->get_name();
    std :: cout << Black_Queen->get_color();
    std :: cout << Black_Queen->move();
    chess_piece* White_Queen = new queen_of_white;
    std :: cout << White_Queen->get_name();
    std :: cout << White_Queen->get_color();
    std :: cout << White_Queen->move();
    int b = 0;
    std :: cin >> b;
    return 0;
}