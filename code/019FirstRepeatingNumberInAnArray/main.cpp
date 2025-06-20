#include <iostream>

bool searchRepeating(int arrCounter[], int counter, int value){
    for(int i=0 ; i<counter ; i++){
        if(arrCounter[i] == value) return true;
    }
    return false;
}

int firstRepeatingElement(int arr[], int size){
    int arrCounter[size] = {};
    int counter = 0;
    for(int i=0 ; i<size ; i++){
        if(searchRepeating(arrCounter, counter, arr[i])) return arr[i];
        arrCounter[i] = arr[i];
        counter++;
    }

    return INT_MIN;
}

int main(){
    int arr[] = {4, 2, 6, 7, 6, 1, 4};
    int size = sizeof(arr)/sizeof(int);

    for(int i=0 ; i<size ; i++) std::cout << arr[i] << ", ";
    std::cout << "\n";

    std::cout << "First Repeating element:\n";
    int result = firstRepeatingElement(arr, size);

    if(result == INT_MIN) std::cout << "Not present\n";
    else std::cout << result << "\n";

    return 0;
}
