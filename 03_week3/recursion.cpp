#include <iostream>
#include <string>
void test(int n);


int main(){
    test(100);

    return 0;
}


//A function which calls itself is a recurisve function
void test(int n){
    std::cout << n << std::endl;
    if (n <= 0) {
        return;         //This is our basecase. if N reaches 0 or lower the function ends
    }

    test(n-1);
    //With no "base case" this will continue forever and fill our memory until it eventually runs out of memory and stops
}

