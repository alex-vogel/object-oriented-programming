/*
*   08/20/25 
*   The first program in C++
*/
#include <iostream> 

// you could add a command "using namespace std;" which would make it so you dont need to clinde the std:: infront of cout later on

// could also do this: using std::cout; which replaces only instances where you write std::cout

// Create a main function

int main(void){
    std::cout << "Hello COP3337!" << std::endl;
    // std - standard namespace -> namespace is kind of like a folder -> you can have two files with the same name in 2 different folders but not in the same folder.
    // :: - scope resolution operator
    // cout - console output (object of an iostream class)
    // << - stream insertion operator
    // endl - end of the line

    return 0;
}