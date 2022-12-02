#include <iostream>
#include "turingtest.h"

int main() {
    //write instructions here
    moveHeadLeft();
    readHead();
    writeHead(3);
    readHead();
    moveHeadRight();
    readHead();
    halt();
}
