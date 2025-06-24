#include <iostream>

int binarySearch(int arr[], int size, int key){
    int iL = 0;
    int iR = size-1;
    while(iL <= iR){
        int iM = (iL+iR)/2;
        int element = arr[iM];
        if(element == key) return iM;
        else if(element < key) iL = iM+1;
        else iR = iM-1;
    }
    return -1;
}

void performBinarySearch(int arr[], int size, int key){
    std::cout << "Searching for " << key << ":\t";
    int index = binarySearch(arr, size, key);
    if(index == -1) std::cout << "Not found";
    else std::cout << index;
    std::cout << "\n";
}

int main(){
    int arr[] = {2, 4, 7, 9, 10, 25, 26, 29, 50, 102};
    int size = sizeof(arr)/sizeof(int);

    std::cout << "Array:\t";
    for(int x : arr) std::cout << x << ", ";
    std::cout << "\n\n";

    performBinarySearch(arr, size, 29);
    performBinarySearch(arr, size, 4);
    performBinarySearch(arr, size, 10);
    performBinarySearch(arr, size, 51);

    return 0;
}
