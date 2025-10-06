// Testing file

// TO COMPILE THIS FILE DO g++ main.cpp car.cpp 
#include "car.hpp"
#include "carDealer.hpp"
#include <iostream>

bool isEfficient(const car& car);

int numberOfInefficientCars(const carDealer& dealer);


int main(){
    //Create a car object
    car ferrari_spider("Ferrari", "Spider", 2021, 16, 2500, 22.3, 3.6);
    ferrari_spider.print();
    std::cout << std::endl;
    car ferrari_f50;
    ferrari_f50.print(); 
    ferrari_f50.setMake("Ferrari");
    ferrari_f50.setModel("f50");
    ferrari_f50.setYear(2012);
    ferrari_f50.setMPG(20.4);
    ferrari_f50.print();

    car testCar("Ford", "Maverick", 2022, 32, 23000, 13.7, 2.4);
    testCar.drive(10);

    std::cout << std::endl;

    //Create carDealer object

    carDealer ferrari_lakeland;
    ferrari_lakeland.addCar(ferrari_f50);
    ferrari_lakeland.addCar(testCar);
    ferrari_lakeland.addCar(ferrari_spider);

    ferrari_lakeland.showInventory();

  //  std::cout << std::endl << (isEfficient(ferrari_f50) ? "Efficient" : "Inefficient") << std::endl << std::endl;
  
  
  std::cout << numberOfInefficientCars(ferrari_lakeland);  
  return 0;
}


//isEfficient implementation
bool isEfficient(const car& car){
    return(car.getMPG() > 20.0) ? true : false;
}


int numberOfInefficientCars(const carDealer& dealer){

    int numOfCars = 0;
    for(car& car : dealer.getInventory()){
        if (!isEfficient(car)) {
            numOfCars++;
        }
    }

    return numOfCars;
}