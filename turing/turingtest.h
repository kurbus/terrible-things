int tape[6]={0,0,0,0,0,0};
int headPos=3;
int i=0;
void moveHeadLeft() {
    if (headPos==1) {
        std::cout<<"Can't moveHeadLeft()\n";
    }
    else headPos--;
};
int readHead() {
    int newHead;
    newHead=headPos-1;
    int result;
    result=tape[newHead];
    std::cout<<"read returned"<<result<<"\n";
    return result;;
}
void writeHead(int put) {
    int newHead;
    newHead=headPos-1;
    tape[newHead]=put;
}
void moveHeadRight() {
    if (headPos==6) {
        std::cout<<"Can't moveHeadRight()\n";
    }
    else headPos++;
}
void halt() {
    std::cout<<"tape: ";
    while (i<6) {
        std::cout<<tape[i];
         i++;
    }
  exit(EXIT_SUCCESS);
}