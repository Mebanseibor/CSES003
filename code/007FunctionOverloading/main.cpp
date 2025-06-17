#include <iostream>

char f1(char a){std::cout << "character\n"; return a;}
int f1(int a){std::cout << "number\n"; return a;}

void makeCoffee(int spoons){std::cout << "Making coffee with " << spoons << " spoons of coffee\n";}
void makeCoffee(char size){std::cout << "Making coffee with " << size << " size\n";}

int main(){
    std::cout << f1('a') << "\n\n";
    std::cout << f1(100) << "\n\n";

    int spoons;
    std::cout << "Enter the number of spoons of coffee: ";
    std::cin >> spoons;

    char size;
    do{
        std::cout << "Enter the size of the cup(s, m, l): ";

        // clears the buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cin >> size;
    }while(size != 's' && size != 'm' && size != 'l');

    makeCoffee(spoons);
    makeCoffee(size);

    return 0;
}
