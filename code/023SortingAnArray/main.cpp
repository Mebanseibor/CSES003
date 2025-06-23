#include <iostream>

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void traverseArray(int arr[], int size, std::string prefix=""){
    std::cout << prefix;
    for(int i=0 ; i<size ; i++) std::cout << arr[i] <<", ";
    std::cout << "\n";
}

void selectionSort(int arr[], int size){
    for(int i=0 ; i<size-1 ; i++){
        int smallest = i;
        for(int j=i+1 ; j<size ; j++){
            if(arr[j] < arr[smallest]) smallest = j;
        }
        if(smallest != i){
            swap(arr[smallest], arr[i]);
            traverseArray(arr, size, "Sorting:\t");
        }
    }
}

void bubbleSort(int arr[], int size){
    for(int i=0 ; i<size-1 ; i++){
        bool isSwapped = false;
        for(int j=0 ; j<size-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                std::cout << "Swapped " << arr[j] << " with " << arr[j+1] << "\t";
                swap(arr[j], arr[j+1]);
                traverseArray(arr, size);
                isSwapped = true;
            }
            else{
                std::cout << "Not swapping " << arr[j] << " with " << arr[j+1] << "\t";
                traverseArray(arr, size);
            }
        }
        std::cout << "\n";
        if(!isSwapped){
            std::cout << "No swapping toke place, arr is already sorted\n";
            break;
        }
    }
}

void insertionSort(int arr[], int size){
    for(int i=0 ; i<size-1 ; i++){
        std::cout << "Inserting " << arr[i+1] << " into the sorted section\t";
        traverseArray(arr, size);
        for(int j=i ; j>=0 ; j--){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                std::cout << "Swapped " << arr[j] << " with " << arr[j+1] << "\t\t\t";
                traverseArray(arr, size);
            }
            else {
                std::cout << "Already at correct position: " << arr[j] << "\t\t";
                traverseArray(arr, size);
                break;
            }
        }
        std::cout << "\n";
    }
}

int main(){
    std::cout << "Demonstrating insertion sort:\n";
    int arr1[] = {5, 4, 2, 1, 3, 9, 6};
    int size1 = sizeof(arr1)/sizeof(int);
    traverseArray(arr1, size1, "Unsorted arr1:\t");
    selectionSort(arr1, size1);
    traverseArray(arr1, size1, "Sorted arr1:\t");
    std::cout << "\n\n\n";


    std::cout << "Demonstrating bubble sort:\n";
    int arr2[] = {6, 1, 7, 2, 8, 3, 4};
    int size2 = sizeof(arr2)/sizeof(int);
    traverseArray(arr2, size2, "Unsorted arr2:\t");
    bubbleSort(arr2, size2);
    traverseArray(arr2, size2, "Sorted arr2:\t");
    std::cout << "\n\n\n";

    std::cout << "Demonstrating insertion sort:\n";
    int arr3[] = {6, 1, 7, 2, 8, 3, 4};
    int size3 = sizeof(arr3)/sizeof(int);
    traverseArray(arr3, size3, "Unsorted arr3:\t");
    insertionSort(arr3, size3);
    traverseArray(arr3, size3, "Sorted arr3:\t");
    std::cout << "\n\n\n";

    return 0;
}
