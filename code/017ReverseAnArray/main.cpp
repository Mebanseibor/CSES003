#include <iostream>
#include <vector>

void traverse(std::vector<int> arr){
    for(int i=0 ; i<arr.size() ; i++) std::cout << arr.at(i) << ", ";
    std::cout << "\n";
}

void reverse(std::vector<int>& arr){
    std::vector<int> arr2;
    int size = arr.size();
    for(int i=0 ; i<size ; i++){
        arr2.insert(arr2.begin()+i, arr.at(size-1-i));
    }
    arr = arr2;
}

int main(){
    std::vector<int> arr = {4, 2, 5, 1, 3};

    traverse(arr);
    reverse(arr);
    traverse(arr);

    return 0 ;
}
