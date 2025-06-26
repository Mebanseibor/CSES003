#include <iostream>

int factorial(int n){
    return n==0 ? 1 : n * factorial(n-1);
}

void printTillN(int n){
    if(n==0) return;
    std::cout << n << " ";
    printTillN(n-1);
}




void performFactorial(int n){
    std::cout << "Performing factorial of: " << n << "\n";
    if(n<0) std::cout << "Factorial of negative numbers are undefined\n";
    else std::cout << n << "! = " << factorial(n) << "\n";
    std::cout << "\n";
}

void performPrintTillN(int n){
    std::cout << "Performing printing from " << n << " till 1\n";
    if(n<=0) std::cout << "Number must be greater than 1";
    else printTillN(n);
    std::cout << "\n\n";
}

int main(){
    performFactorial(4);
    performFactorial(0);
    performFactorial(3);
    performFactorial(5);
    performFactorial(-1);

    std::cout << "\n\nPrinting upto n numbers\n";
    performPrintTillN(9);
    performPrintTillN(-1);
    performPrintTillN(1);
    performPrintTillN(0);
    performPrintTillN(20);
    return 0;
}
