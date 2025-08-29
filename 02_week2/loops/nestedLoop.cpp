#include <iostream>

int main(){
    int n;
    std::cin >> n; //get number

    // n, n-1, n-2, n-3.... 1 2 3....n
    for(int i = 0; i <= n; i++){

        for(int i = n; i > 0; i--){
            std::cout << i << ' ';

        }
        for(int i = 2; i <= n; i++){
            std::cout << i << ' ';
        }
    std::cout << '\n';
}


    return 0;
}