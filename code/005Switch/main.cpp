#include <iostream>

int main(){
    int a, b;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    char ch;
    std::cout << "Enter the opearation that you want(+, -): ";
    std::cin >> ch;
    switch(ch){
        case '-':{
            std::cout << a-b << "\n";
            break;
        };
        case '+':{
            std::cout << a+b << "\n";
            break;
        };
        default:{
            break;
        };
    }

    return 0;
}
