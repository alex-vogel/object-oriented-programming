#include <iostream>

// Create the namespace
namespace first {
    int a = 5;

    void print(void){
        std::cout << "First" << std::endl;
    }

}

namespace second {
    int a = 5;

    void print(void){
        std::cout << "Second" << std::endl;
    }

}

int main(void){
    second::print();
    return 0;
}