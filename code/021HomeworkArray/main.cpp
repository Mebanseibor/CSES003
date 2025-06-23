#include <iostream>

void countZeroesAndOnes(int arr[], int size){
    int countZeroes = 0, countOnes = 0;

    for(int i=0 ; i<size ; i++){
        if(arr[i] == 0) countZeroes++;
        else if(arr[i] == 1) countOnes++;
    }

    std::cout << "Count of Zeroes:\t" << countZeroes << "\n";
    std::cout << "Count of Ones:\t\t" << countOnes << "\n";
}

void countElementGreaterThan(int arr[], int size, int k){
    int count = 0;
    for(int i=0 ; i<size ; i++) if(arr[i] > k) count++;
    std::cout << "Count of elements greater than " << k << ":\t" << count << "\n";
}

void traverseArray(int arr[], int size){
    for(int i=0 ; i<size ; i++) std::cout << arr[i] << ", ";
    std::cout << "\n";
}

int main(){
    int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 1, 2, 3, 1, 4, 0, -1, -1, 9};
    int size =  sizeof(arr)/sizeof(int);

    traverseArray(arr, size);

    countZeroesAndOnes(arr, size);

    int k = 2;
    countElementGreaterThan(arr, size, k);
    
    return 0;
}
