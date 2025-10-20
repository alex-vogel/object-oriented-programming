#include <iostream>

class Hello{
    public:
        Hello(){
            std::cout << "Constructor" << std::endl;
        }

        Hello(int n){
            std::cout << "Constructor with arguments" << std::endl;
        }


        void bye(void){
            std::cout << "Bye" << std::endl;
        }


};

int main(){
    //Create an object dynamically

    Hello *hi = new Hello;

    // Create object dynamically with arguments
    Hello *hi2 = new Hello(2);

    // Access bye method
    hi->bye();
    (*hi2).bye();

    // Deallocate the memory
    delete hi;
    delete hi2;

    return 0;
}