#include <iostream>
#include <string>

class Hello{
    public:
        Hello() : messages(nullptr), size(0) {
            std::cout << "Constructor" << std::endl;
        }

        Hello(int n){
            size = n;
            std::cout << "Constructor with arguments" << std::endl;
            // Dynamically allocate an array of strings
            messages = new std::string[n];
            //Initialize array
            for(int i = 0; i < n; i++){
                messages[i] = ((i % 2) == 0) ? "Welcome!" : "Not welcome!";
            }
        }

        //Destructor
        ~Hello(){ //Note destructors cant be overloaded, they always have no arguments
            delete [] messages;
        }

        //Copy constructor
        Hello(const Hello& other){
            std::cout << "copy constructor\n";
            size = other.size;
            //Copy elements from other messages to messages
        }


        void bye(void){
            std::cout << "Bye" << std::endl;
        }


        void printGreetings() const {
            for(int i = 0; i < size; i++){
                std::cout << messages[i] << std::endl;
            }
        }

    private:
        std::string *messages; // An array of strings
        int size; // Size of array of strings

};

void test(Hello h){
    std::cout << "test\n";
}

int main(){
    //Create an object dynamically

    Hello *hi = new Hello;
    delete hi;

    // Create object dynamically with arguments
    Hello *hi2 = new Hello(2);

    // Access bye method
    hi->bye();
    (*hi2).bye();

    // Access print greeting
    hi2->printGreetings();

    // Deallocate the memory
    delete hi2;

    /*
    for (int i = 0; i < 100; i++){
       Hello(9999999);   //This eventually breaks because we run out of memory if we dont have the destructor in class
    }

*/
Hello hi3(100);
Hello hi4 = hi3; //Without working on copy constructor this will cause a segmentation fault, address will be deleted twice, the second time theres nothing to delete

    return 0;
}