#include <iostream>

int main(){
    int x = 10;
    int* ptr = &x;
    int* ptr2 = ptr;
    int** ptr3 = &ptr2;

    std::cout << "int x = 10\n";
    std::cout << "int* ptr = &x\n";
    std::cout << "int* ptr2 = ptr\n";
    std::cout << "int** ptr3 = &ptr2\n";

    std::cout << "\n";

    std::cout << "x:\t" << x << "\n";
    std::cout << "&x:\t" << &x << "\n";

    std::cout << "\n";

    std::cout << "ptr:\t" << ptr << "\n";
    std::cout << "*ptr:\t" << *ptr << "\n";
    std::cout << "&ptr:\t" << &ptr << "\n";

    std::cout << "\n";

    std::cout << "ptr2:\t" << ptr2 << "\n";
    std::cout << "*ptr2:\t" << *ptr2 << "\n";
    std::cout << "&ptr2:\t" << &ptr2 << "\n";

    std::cout << "\n";

    std::cout << "ptr3:\t" << ptr3 << "\n";
    std::cout << "*ptr3:\t" << *ptr3 << "\n";
    std::cout << "&ptr3:\t" << &ptr3 << "\n";
    std::cout << "*(*ptr3):\t" << *(*ptr3) << "\n";

    return 0;
}
