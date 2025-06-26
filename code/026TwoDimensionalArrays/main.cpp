#include <iostream>

bool searchElement(int key, int arr[][4], int r, int c){
    for(int row=0 ; row<r ; row++){
        for(int col=0 ; col<c ; col++){
            if(arr[row][col] == key) return true;
        }
    }
    return false;
}

void performSearch(int key, int arr[][4], int r, int c){
    std::cout << "\nPerforming search for " << key << "\n";
    if(searchElement(key, arr, r, c)) std::cout << "Key was found\n";
    else std::cout << "Key was NOT found\n";
    std::cout << "\n";
}

void sumRows(int arr[][4], int r, int c){
    for(int row=0 ; row<r ; row++){
        int sum = 0;
        for(int col=0 ; col<c ; col++){
            sum += arr[row][col];
            std::cout << arr[row][col] << " ";
        }
        std::cout << "\t" << sum << "\n";
    }
    std::cout << "\n";
}

void maxSumRows(int arr[][4], int r, int c){
    int maxSum = INT_MIN;
    for(int row=0 ; row<r ; row++){
        int sum = 0;
        for(int col=0 ; col<c ; col++){
            sum += arr[row][col];
            std::cout << arr[row][col] << " ";
        }
        if(sum > maxSum) maxSum = sum;
        std::cout << "\t" << sum << "\n";
    }
    std::cout << "Max sum of the rows is " << maxSum << "\n";
    std::cout << "\n";
}

void sumColumns(int arr[][4], int r, int c){
    int result[4] = {};
    for(int row=0 ; row<r ; row++){
        for(int col=0 ; col<c ; col++){
            result[col] += arr[row][col];
            std::cout << arr[row][col] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for(int x : result) std::cout << x << "\t";
    std::cout << "\n";
}

void traverseWave(int arr[][4], int r, int c){
    for(int col=0 ; col<c ; col++){
        for(int row=0 ; row<r ; row++){
            if(col%2!=0) std::cout << arr[r-1-row][col] << " ";
            else std::cout << arr[row][col] << " ";
        }
        std::cout << "\t";
    }
}

void traverseSpiral(int arr[][4], int r, int c){
    int rT=0, rB=r-1, cL=0, cR=c-1;
    while(rT<=rB && cL<=cR){
        std::cout << "(L->R) (T->B) (R->L) (B->T):\t";
        std::cout << "(";
        for(int col=cL ; col<=cR && cL<=cR ; col++){
            std::cout << arr[rT][col] << " ";
        }
        rT++;
        std::cout << ")\t";

        std::cout << "(";
        for(int row=rT ; row<=rB ; row++){
            std::cout << arr[row][cR] << " ";
        }
        cR--;
        std::cout << ")\t";

        std::cout << "(";
        for(int col=cR ; col>=cL && rT<=rB ; col--){
            std::cout << arr[rB][col] << " ";
        }
        rB--;
        std::cout << ")\t";

        std::cout << "(";
        for(int row=rB ; row>=rT ; row--){
            std::cout << arr[row][cL] << " ";
        }
        cL++;
        std::cout << ")";
        std::cout << "\n";
    }
}





void performSumRows(int arr[][4], int r, int c){
    std::cout << "\nPerforming sum row-wise for the 2D array\n";
    sumRows(arr, r, c);
    std::cout << "\n";
}

void performMaxSumRows(int arr[][4], int r, int c){
    std::cout << "\nPerforming max sum row-wise for the 2D array\n";
    maxSumRows(arr, r, c);
    std::cout << "\n";
}

void performSumColumns(int arr[][4], int r, int c){
    std::cout << "\nPerforming sum column-wise for the 2D array\n";
    sumColumns(arr, r, c);
    std::cout << "\n";
}

void performWaveTraversal(int arr[][4], int r, int c){
    std::cout << "\nPerforming Wave traversal:\n";
    traverseWave(arr, r, c);
    std::cout << "\n";
}

void performSpiralTraversal(int arr[][4], int r, int c){
    std::cout << "\nPerforming Spiral traversal:\n";
    traverseSpiral(arr, r, c);
    std::cout << "\n";
}

int main(){
    int row1 = 3, column1 = 4;
    
    int arr1[3][4];
    std::cout << "Enter the elements:\n";
    for(int row=0, r=row1 ; row<r ; row++){
        std::cout << "Enter the elements of row: " << row+1 << "\n";
        for(int col=0, c=column1 ; col<c ; col++){
            std::cin >> arr1[row][col];
        }
        std::cout << "\n";
    }

    std::cout << "\nContents of the 2D-array:\n";
    for(int row=0, r=row1 ; row<r ; row++){
        for(int col=0, c=column1 ; col<c ; col++){
            std::cout << arr1[row][col] << ", ";
        }
        std::cout << "\n";
    }



    std::cout << "\nSearching for an element in the 2D-array\n";
    int key;
    std::cout << "Enter the element to search for: ";
    std::cin >> key;

    performSearch(key, arr1, row1, column1);

    performSumRows(arr1, row1, column1);
    performMaxSumRows(arr1, row1, column1);
    performSumColumns(arr1, row1, column1);

    performWaveTraversal(arr1, row1, column1);
    performSpiralTraversal(arr1, row1, column1);

    return 0;
}
