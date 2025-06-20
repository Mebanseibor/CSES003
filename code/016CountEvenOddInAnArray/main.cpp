#include <iostream>
#include <vector>

std::vector<int> evenOdd(std::vector<int>& arr){
    int countEven = 0;
    int countOdd = 0;

    for(int i=0 ; i<arr.size() ; i++){
            arr.at(i)%2==0 ? countEven++ : countOdd++;
    }

    std::vector<int> result = {countEven, countOdd};
    return result;
}

int main(){
    std::vector<int> arr = {7, 3, 5, 2, 4, 1, 3, 7, 8, 4, 2, 1};

    for(int i=0 ; i<arr.size() ; i++) std::cout << arr[i] << ", ";
    std::cout << "\n";

    std::vector<int> result = evenOdd(arr);
    std::cout << "Even: " << result.at(0) << "\n";
    std::cout << "Odd: " << result.at(1) << "\n";

    return 0;
}
