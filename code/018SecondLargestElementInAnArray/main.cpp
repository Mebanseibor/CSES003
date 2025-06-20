#include <iostream>

void traverse(int arr[], int size, std::string prefix = ""){
    std::cout << prefix << ":\n";

    for(int i=0 ; i<size ; i++) std::cout << arr[i] << ", ";
    std::cout << "\n";
}

int secondLargestElement(int arr[], int size){
    if(size == 0) return -1;
    else if(size == 1) return arr[0];

    int smaller = arr[0];
    int larger = arr[1];

    if(smaller > larger){
        int temp = smaller;
        smaller = larger;
        larger = temp;
    }

    for(int i=2 ; i<size ; i++){
        if(larger < arr[i]){
            smaller = larger;
            larger = arr[i];
        }
    }
    return smaller;
}

int main(){
    int arr1[] = {4, 2, 5, 1, 2, 3, 2, 7};
    int size = sizeof(arr1)/sizeof(int);
    traverse(arr1, size, "arr1");
    std::cout << "Second Largest element: " << secondLargestElement(arr1, size) << "\n\n";

    int arr2[] = {};
    size = sizeof(arr2)/sizeof(int);
    traverse(arr2, size, "arr2");
    std::cout << "Second Largest element: " << secondLargestElement(arr2, size) << "\n\n";

    int arr3[] = {3};
    size = sizeof(arr3)/sizeof(int);
    traverse(arr3, size, "arr3");
    std::cout << "Second Largest element: " << secondLargestElement(arr3, size) << "\n\n";

    int arr4[] = {9, 1};
    size = sizeof(arr4)/sizeof(int);
    traverse(arr4, size, "arr4");
    std::cout << "Second Largest element: " << secondLargestElement(arr4, size) << "\n\n";
}
