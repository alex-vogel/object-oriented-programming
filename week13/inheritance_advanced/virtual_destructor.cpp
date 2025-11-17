#include <iostream>

class Dad{
public:
    Dad(){
        std::cout << "Dad's constructor\n";
    }
    virtual ~Dad(){
        std::cout << "dads destructor\n"; //If someone is going to inherit from this class and you need a destructor, you need a virtual destructor
    }

};


class Son : public Dad{
public:
    Son(){
        std::cout << "Son's construcoitr\n";
        std::cout << "Dynamic memory was allocated\n";
    }
    ~Son(){
        std::cout << "Dynamic memory deallocated\n";
    }


};



int main(){
    Dad *dad = new Son(); //Pointer of type parent pointing to an object of type child

    delete dad;

    return 0;
}