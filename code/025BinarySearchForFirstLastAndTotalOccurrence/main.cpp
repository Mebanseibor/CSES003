#include <iostream>

int binarySearch(int arr[], int size, int key, std::string occurrence = ""){
    int iL = 0;
    int iR = size-1;
    int iOccurrence = -1;
    while(iL <= iR){
        int iM = (iL+iR)/2;
        int element = arr[iM];
        if(element == key){
            iOccurrence = iM;
            if(occurrence == "first") iR = iM-1;
            else if(occurrence == "last") iL = iM+1;
            else return iM;
        }
        else if(element < key) iL = iM+1;
        else iR = iM-1;
    }
    return iOccurrence;
}

void performSearch(int arr[], int size, int key, std::string occurrence = ""){
    std::cout << "Searching for ";
    if(occurrence == "first") std::cout << "first occurrence of ";
    else if (occurrence == "last") std::cout << "last occurrence of ";
    std::cout << key << ":\t";

    int index = binarySearch(arr, size, key, occurrence);
    if(index == -1) std::cout << "Not found";
    else std::cout << index;
    std::cout << "\n";
}

void performTotalOccurrence(int arr[], int size, int key){
    int first = binarySearch(arr, size, key, "first");
    int last = binarySearch(arr, size, key, "last");
    int result = (first==-1 && last==-1) ? 0 : last-first+1;

    std::cout << "Total occurrence of " << key << " is:\t" << result << "\n";
}

int main(){
    int arr[] = {2, 2, 2, 4, 7, 9, 9, 9, 9, 9, 9, 9, 9, 10, 25, 26, 29, 50, 102};
    int size = sizeof(arr)/sizeof(int);

    std::cout << "Array:\t";
    for(int x : arr) std::cout << x << ", ";
    std::cout << "\n\n";

    performSearch(arr, size, 9, "first");
    performSearch(arr, size, 9, "last");
    performSearch(arr, size, 29);
    performSearch(arr, size, 2, "first");
    performSearch(arr, size, 2, "last");
    performSearch(arr, size, 51);

    std::cout << "\n";
    performTotalOccurrence(arr, size, 9);
    performTotalOccurrence(arr, size, 2);
    performTotalOccurrence(arr, size, 3);
    performTotalOccurrence(arr, size, 4);

    return 0;
}
