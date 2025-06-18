#include <iostream>

void fV(int x){ std::cout << "in fV():\t" << x++ << "\n"; }

void fR(int& x){ std::cout << "In fR():\t" << x++ << "\n"; }

void fProduct(int& a, int& b, int& c){ c = a*b;}

int main(){
    int x = 10;

    fV(x);
    std::cout << "In Main after fA():\t" << x << "\n";

    std::cout << "\n";

    fR(x);
    std::cout << "In Main after fR():\t" << x << "\n";


    std::cout << "\n\n";
    int a=2, b=3, c=0;
    std::cout << "a:\t" << a << "\n";
    std::cout << "b:\t" << b << "\n";
    std::cout << "c:\t" << c << "\n";
    fProduct(a, b, c);
    std::cout << "After fProduct():\n";
    std::cout << "c:\t" << c << "\n";

    return 0;
}
