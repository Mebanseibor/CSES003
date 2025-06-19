#include <iostream>

class Box{
    public:
    int length=0, width=0, height=0;

    Box(){}
    Box(int length, int width, int height){
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void display(){
        std::cout << "Length:\t" << length << "\n";
        std::cout << "Width:\t" << width << "\n";
        std::cout << "Height:\t" << height << "\n";
        std::cout << "\n";
    }

    int calculateArea(){
        return 2*(length*width) + 2*(length*height) + 2*(width*height);
    }

    int calculateVolume(){
        return length*width*height;
    }
};

int main(){
    Box b1 = Box(1, 2, 3);
    Box b2 = Box(2, 3, 4);

    std::cout << "b1:\n";
    b1.display();

    std::cout << "b2:\n";
    b2.display();

    std::cout << "Area and Volume of b1:\t" << b1.calculateArea() << "\t" << b1.calculateVolume() << "\n";
    std::cout << "Area and Volume of b2:\t" << b2.calculateArea() << "\t" << b2.calculateVolume() << "\n";

    return 0;
}
