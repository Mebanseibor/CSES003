#include <iostream>

void traverseArray(int arr[], int size){
    for(int i=0 ; i<size ; i++) std::cout << arr[i] << ", ";
    std::cout << "\n";
}

int factorial(int n){
    return n==0 ? 1 : n * factorial(n-1);
}

void printTillN(int n){
    if(n==0) return;
    std::cout << n << " ";
    printTillN(n-1);
}

void fibonacciSeries(int f1, int f2, int f3, int n){
    if(n < 0) return;
    std::cout << f1 << "\t" << f2 << "\t" << f3 << "\n";
    fibonacciSeries(f2, f3, f2+f3, n-1);
}

int countSteps(int n){
    if(n<=1) return 1;
    return countSteps(n-1) + countSteps(n-2);
}

bool checkOrderInArray(int arr[], int size){
    if(size<=1) return true;
    return (arr[size-2] < arr[size-1]) && checkOrderInArray(arr, --size);
}

int sumOfArray(int arr[], int size){
    if(size<=0) return 0;
    return arr[size-1] + sumOfArray(arr, size-1);
}

bool linearSearchInArray(int arr[], int size, int key){
    if(arr[0] == key) return true;
    if(size<=1) return false;
    return linearSearchInArray(arr+1, --size, key);
}

bool binarySearchInArray(int arr[], int key, int left, int right){
    if(left > right) return false;
    int mid = left+((left+right)/2);
    if(arr[mid] == key) return mid;
    else if (key < arr[mid]) return binarySearchInArray(arr, key, left, mid-1);
    else return binarySearchInArray(arr, key, mid+1, right);
}




void performFactorial(int n){
    std::cout << "Performing factorial of: " << n << "\n";
    if(n<0) std::cout << "Factorial of negative numbers are undefined\n";
    else std::cout << n << "! = " << factorial(n) << "\n";
    std::cout << "\n";
}

void performPrintTillN(int n){
    std::cout << "Performing printing from " << n << " till 1\n";
    if(n<=0) std::cout << "Number must be greater than 1";
    else printTillN(n);
    std::cout << "\n\n";
}

void performFibonacciSeries(int n){
    std::cout << "Performing printing of the first " << n << " fibonacci series\n";
    if(n<=0) std::cout << "n must be greater than -1";
    else{
        std::cout << "f1\tf2\tf3\n";
        fibonacciSeries(0, 1, 0, n-1);
    }
    std::cout << "\n\n";
}

void performClimbingSteps(int n){
    std::cout << "Performing distinct ways to climb-up a staircase of " << n << " steps\n";
    if(n<=0) std::cout << "Number of steps must be greater than 1";
    else{
        std::cout << countSteps(n) << "\n";
    }
    std::cout << "\n\n";
}

void performCheckOrderInArray(int arr[], int size){
    std::cout << "Performing check on the order of the following array:\n";
    traverseArray(arr, size);
    if(size < 0) std::cout << "Size of the array was negative\n";
    else{
        if(checkOrderInArray(arr, size)) std::cout << "Array is sorted\n";
        else std::cout << "Array is NOT sorted\n";
    };
    std::cout << "\n\n";
}

void performSumOfArray(int arr[], int size){
    std::cout << "Performing the operation to find the sum of all the elements of the following array:\n";
    traverseArray(arr, size);
    if(size < 0) std::cout << "Size of the array was negative\n";
    else std::cout << sumOfArray(arr, size);
    std::cout << "\n\n";
}

void performLinearSearchInArray(int arr[], int size, int key){
    std::cout << "Performing Linear search for the key " << key << " in the folliwing array:\n";
    traverseArray(arr, size);
    if(size < 0) std::cout << "Size of the array was negative\n";
    else if(linearSearchInArray(arr, size, key)) std::cout << "The key " << key << " was found\n";
    else std::cout << "The key was NOT found\n";
    std::cout << "\n\n";
}

void performBinarySearchInArray(int arr[], int size, int key){
    std::cout << "Performing Binary search for the key " << key << " in the folliwing array:\n";
    traverseArray(arr, size);
    if(size < 0) std::cout << "Size of the array was negative\n";
    else if(binarySearchInArray(arr, key, 0, size-1)) std::cout << "The key was found\n";
    else std::cout << "The key was NOT found\n";
    std::cout << "\n\n";
}






int main(){
    performFactorial(4);
    performFactorial(0);
    performFactorial(3);
    performFactorial(5);
    performFactorial(-1);

    std::cout << "\n\nPrinting upto n numbers\n";
    performPrintTillN(9);
    performPrintTillN(-1);
    performPrintTillN(1);
    performPrintTillN(0);
    performPrintTillN(20);


    std::cout << "\n\nPrinting fibonacci series for the first n numbers\n";
    performFibonacciSeries(5);
    performFibonacciSeries(13);
    performFibonacciSeries(-1);
    performFibonacciSeries(0);
    performFibonacciSeries(1);
    performFibonacciSeries(2);

    
    std::cout << "\n\nPrinting number of distinct ways to climb n number of steps in a staircase\n";
    performClimbingSteps(3);
    performClimbingSteps(2);
    performClimbingSteps(5);
    performClimbingSteps(0);
    performClimbingSteps(-1);

    std::cout << "\n\nDetermining if an array is sorted or not\n";
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    performCheckOrderInArray(arr1, sizeof(arr1)/sizeof(int));

    int arr2[] = {1, 3, 5, 9, 2};
    performCheckOrderInArray(arr2, sizeof(arr2)/sizeof(int));


    std::cout << "\n\nPrinting the sum of the array\n";
    performSumOfArray(arr1, sizeof(arr1)/sizeof(int));
    performSumOfArray(arr2, sizeof(arr2)/sizeof(int));


    std::cout << "\n\nLinear searching in an array\n";
    performLinearSearchInArray(arr1, sizeof(arr1)/sizeof(int), 5);
    performLinearSearchInArray(arr1, sizeof(arr1)/sizeof(int), 8);
    performLinearSearchInArray(arr2, sizeof(arr2)/sizeof(int), 3);

    std::cout << "\n\nBinary searching in an array\n";
    performLinearSearchInArray(arr1, sizeof(arr1)/sizeof(int), 5);
    performLinearSearchInArray(arr1, sizeof(arr1)/sizeof(int), 8);

    return 0;
}
