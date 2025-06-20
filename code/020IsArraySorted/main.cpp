#include <iostream>

bool isArraySorted(int arr[], int size){
    for(int i=0 ; i<size-1 ; i++) if(arr[i]>arr[i+1]) return false;
    return true;
}

void checkOrderOfArray(int arr[], int size){
    std::cout << "Contents of the array:\n";

    std::cout << "{";
    for(int i=0 ; i<size ; i++) std::cout << arr[i] << ", ";
    std::cout << "}\n";

    if(isArraySorted(arr, size)) std::cout << "Array is Sorted\n\n\n";
    else std::cout << "Array is NOT Sorted\n\n\n";
}

int main(){
    int arr[] = {3, 5, 1, 5, 2, 5};
    int size = sizeof(arr)/sizeof(int);
    checkOrderOfArray(arr, size);

    int arr2[] = {};
    size = sizeof(arr2)/sizeof(int);
    checkOrderOfArray(arr2, size);

    int arr3[] = {1, 4, 5, 6, 7};
    size = sizeof(arr3)/sizeof(int);
    checkOrderOfArray(arr3, size);

    return 0;
}
