#include <iostream>
#include <vector>

void display(std::vector<int> v){
    std::cout << "Vector:\n";
    for(int i=0 ; i<v.size() ; i++) std::cout << v[i] << ", ";
    std::cout << "\n";
}

void displayReverse(std::vector<int> v){
    std::cout << "Vector in reverse:\n";
    for(int i=v.size()-1 ; i>=0 ; i--) std::cout << v[i] << ", ";
    std::cout << "\n";
}

int main(){
    std::vector<int> v;

    v.push_back(50);
    v.push_back(20);
    v.push_back(10);

    std::cout << "v[0]:\t\t" << v[0] << "\n";
    std::cout << "v.at(0):\t" << v.at(0) << "\n";

    std::cout << "\n";
    display(v);

    std::cout << "\n";
    v.erase(v.begin()+1);
    display(v);



    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    std::vector<int> vInput = std::vector<int>();
    for(int i=0 ; i<n ; i++){
        int input;
        std::cout << "Enter an integer for position " << i+1 << ": ";
        std::cin >> input;
        vInput.push_back(input);
    }
    display(vInput);
    displayReverse(vInput);
    
    return 0;
}
