#include <iostream>

void display(int arr[], int size){
    for(int i=0 ; i<size ; i++) std::cout << arr[i] << ", ";
    std::cout << "\n";
}

int main(){
    int size = 5;
    int arr1[size] = {};
    int arr2[size] = {3};

    display(arr1, 5);
    display(arr2, 5);
    
    return 0;
}
