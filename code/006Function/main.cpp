#include <iostream>

// forward declaration
void fA2();

void fA1(){
    fA2();
    std::cout << "fA1()\n";
}

void fA2(){
    std::cout << "fA2()\n";
}

int fReturn(){ return 0; }
int fReturn(int a, int b){ return 2; }

std::string getName(){
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    return name;
}

int main(){
    // demonstrating order of function calls
    fA1();

    // demonstrating function overloading
    std::cout << fReturn() << "\n";
    std::cout << fReturn(1, 2) << "\n";

    // demonstrating function return
    std::cout << getName() << "\n";

    return 0;
}
