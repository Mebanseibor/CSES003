#include <iostream>

bool linearSearch(int arr[], int size, int key){
    std::cout << "Performing Searching for key:\t" << key << "\n";
    for(int i=0 ; i<size ; i++) if(arr[i] == key) return true;
    return false;
}

void traverseArray(int arr[], int size){
    std::cout << "Contents of the array:\n";
    for(int i=0 ; i<size ; i++) std::cout << arr[i] << ", ";
    std::cout << "\n\n";
}

int main(){
    int arr[] = {4, 2, 1, 5, 7, 3, 9};
    int size = sizeof(arr)/sizeof(int);

    traverseArray(arr, size);

    int key = 7;
    if(linearSearch(arr, size, key)) std::cout << "Key " << key << " was found\n";
    else std::cout << "Key " << key << " was NOT found\n";
    std::cout << "\n";

    key = 10;
    if(linearSearch(arr, size, key)) std::cout << "Key " << key << " was found\n";
    else std::cout << "Key " << key << " was NOT found\n";
    std::cout << "\n";

    return 0;
}
