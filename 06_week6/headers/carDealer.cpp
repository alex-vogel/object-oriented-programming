#ifndef CARDEALER_H
#define CARDEALER_H
#include "carDealer.hpp"
#include <iostream>

void carDealer::showInventory() const{
    for(int i = 0; i < inventory.size(); i++){
        inventory[i].print(); //This only works because print() is a const. you cant have a const function call a nonconst function
        std::cout << "----------" << std::endl;
    }
}

void carDealer::addCar(const car& car){
    inventory.push_back(car);

}





#endif