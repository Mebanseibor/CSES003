#include <iostream>

void display(int arr[], int size, std::string prefix){
    std::cout << prefix << ":\n";
    for(int i=0 ; i<size ; i++) std::cout << arr[i] << ", ";
    std::cout << "\n\n";
}

int sumArr(int arr[], int size){
    int sum = 0;
    for(int i=0 ; i<size ; i++) sum += arr[i];
    return sum;
}

int main(){
    int size = 5;
    int arr1[size] = {};
    int arr2[size] = {3};
    int arr3[size] = {3, 4, 2, 5, 1};

    display(arr1, 5, "arr1");
    display(arr2, 5, "arr2");
    display(arr3, 5, "arr3");



    // demonstrating input from the user
    int arrU[size];
    for(int i=0 ; i<size ; i++){
        std::cout << "Enter the number at the position: " << i+1 << ": ";
        std::cin >> arrU[i];
    };
    display(arrU, 5, "arrU");



    // demonstrating sum of the array
    std::cout << "Sum of arrU:\n" << sumArr(arrU, size) << "\n";
    
    return 0;
}
