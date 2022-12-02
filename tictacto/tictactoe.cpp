#include "tictactoe.h"
int i=0;
int main() {
    while (i<9)
    {
    int place;
    i++;
    std::string xo;
    std::cout<<"enter place on board, 1-9 \n?";
    std::cin>>place;
    std::cout<<"enter character to place there \n?";
    std::cin>>xo;
    placeMark(place,xo);
    putdownBoard();
    if (detectWin()==1) {
        std::cout<<"winner!";
        exit(EXIT_SUCCESS);
     }
     if (xo=="exit") {
        exit(EXIT_SUCCESS);
     }
    }
}