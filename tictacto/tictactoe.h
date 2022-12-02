#include <stdio.h>
#include <iostream>
std::string board[9]={"n","n","n","n","n","n","n","n","n"};
void placeMark(int place, std::string xo) {
   int newplace;
   newplace=place-1;
 if(newplace>8 or newplace<0) {
    std::cout<<"Invalid";
    return;
 }
 board[newplace]=xo;
 std::cout<<"Appended character "<<xo<<" at place "<<place;
}
void putdownBoard() {
   std::cout<<"\n"<<board[0]<<board[1]<<board[2]<<"\n"<<board[3]<<board[4]<<board[5]<<"\n"<<board[6]<<board[7]<<board[8]<<"\n";
}
int detectWin() {
   if(board[0]=="x"&&board[2]=="x"&&board[5]=="x") {
      std::cout<<"x win!!";
      return 0;
   }
   else if (board[2]=="x"&&board[5]=="x"&&board[8]=="x"){
      std::cout<<"x win!!";
      return 0;
   }
}