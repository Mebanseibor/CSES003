#include <iostream>

const int MAX_BUFFER = 16;

int getLength(char chSqn[]){
    int count = 0;
    for(int i=0 ;  i<MAX_BUFFER && chSqn[i]; i++) count++;
    if(count==16) return -1;
    return count;
}

void performGetLength(char chSqn[]){
    std::cout << "Getting the length of the character sequence \"" << chSqn << "\"\n";
    int count = getLength(chSqn);
    if(count == -1) std::cout << "Buffer overflowed: Limit was " << MAX_BUFFER << " characters\n";
    else std::cout << "Length:\t" << count << "\n";
    std::cout << "\n\n";
}

int main(){
    char name[16];
    std::cout << "Enter the name: ";
    std::cin >> name;

    performGetLength(name);
    return 0;
}
