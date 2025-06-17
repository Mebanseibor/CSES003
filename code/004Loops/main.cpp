#include <iostream>

int main(){
    int n = 4;

    for(int i=0 ; i<n ; i++){
        std::cout << i+1 << ", ";
    }



    std::cout << "\n\n";
    for(int i=0 ; i<5 ; i++){
        for(int j=i ; j<5 ; j++){
            if(i+j == 5) break;
            std::cout << i << " " << j << "\n";
        };
    };


    std::cout << "\n\n";
    for(int i=1; i<=n ; i++){
        for(int j=i ; j>=1 ; j--) std::cout << j << ", ";
        std::cout << "\n";
    }

    return 0;
}
