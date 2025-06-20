#include <iostream>

int max(int arr[], int size){
    if(size == 0) return -1;

    int max = arr[0];
    for(int i=0 ; i<size ; i++){
        if(arr[i] > max) max = arr[i];
    }

    return max;
}

int min(int arr[], int size){
    if(size == 0) return -1;

    int min = arr[0];
    for(int i=0 ; i<size ; i++){
        if(arr[i] < min) min = arr[i];
    }

    return min;
}

int main(){
    int arr[] = {8, 2, 3, 1, 5, 12, 41, 24, 14, 2};
    int size = sizeof(arr)/sizeof(int);

    for(int i=0 ; i<size ; i++) std::cout << arr[i] << ", ";
    std::cout << "\n";

    std::cout << "Max of the array: " << max(arr, size) << "\n";
    std::cout << "Min of the array: " << min(arr, size) << "\n";

    return 0;
}
