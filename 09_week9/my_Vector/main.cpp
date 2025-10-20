#include "MyVector.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>


int main(){
std::vector<int> n;
n.push_back(10);
n.at(0) = 100;
std::cout<< n.at(0) << std::endl;

    //Create a vector object dynamically
    MyVector *mvPtr = new MyVector(10);

    for(int i = 0; i < 200; i++){
        mvPtr->push_back(rand() % 100);
        std::cout << mvPtr->getCapacity() << std::endl;
    }

/*
    mvPtr->push_back(1);
    mvPtr->push_back(2);
    mvPtr->push_back(3);
    mvPtr->push_back(4);
    mvPtr->print(); //Issue, if we try putting too many elements into the array there will be an error.
    mvPtr->push_back(5);
    mvPtr->push_back(6);
    mvPtr->push_back(7);
    mvPtr->push_back(8);
    mvPtr->push_back(9);
    mvPtr->push_back(10);
    mvPtr->push_back(11);
    mvPtr->push_back(12);
    mvPtr->print();
    */

for(int i = 0; i< 5; i++){
        mvPtr->pop_back();
        std::cout << mvPtr->getCapacity() << std::endl;
    }


    mvPtr->print();
    std::cout<< "Using at " << mvPtr->at(3) << std::endl;

    delete mvPtr;
    return 0;
}