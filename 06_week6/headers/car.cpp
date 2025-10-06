// This is the implementation of a Car class

#include "car.hpp"
#include <iostream>

// No-arg constructor

car::car(){
    setMake("Unknown");
    setModel("Unknown");
    setYear(1900);
    setMPG(0.0);
    setMilage(0);
    setFuelCap(1);
    setFuelLevel(0);
}


//Setters
void car::setMake(std::string newMake){
    if (!newMake.empty()){
        make = newMake;
    }
}

void car::setModel(std::string newModel){
    if(!newModel.empty()){
        model = newModel;
    }
}

void car::setYear(int newYear){
    year = (newYear >= 1900 && newYear <= 2025) ? newYear : 1900;
}

void car::setMPG(double newMPG){
    MPG = (newMPG > 0) ? newMPG : 0.0;
}
void car::setMilage(double newMileage){
    if(newMileage >= 0){
        mileage = newMileage;
    }
}
void car::setFuelCap(double newFuelCapacity){
    if(newFuelCapacity > 0){
        fuel_capacity = newFuelCapacity;
    }
}
void car::setFuelLevel(double fuelLevel){
    if (fuelLevel >= 0 && fuelLevel <= fuel_capacity){
        fuel_level = fuelLevel;
    }
}


//Getters
std::string car::getMake() const { return make;}
    std::string car::getModel() const { return model;}
    int car::getYear() const {return year;}
    double car::getMPG() const {return MPG;}
    double car::getMileage() const {return mileage;}
    double car::getFuelCap() const {return fuel_capacity;}
    double car::getFuelLevel() const{return fuel_level;}


    //print
    void car::print(void) const{
        std::cout << getMake() << std::endl;
        std::cout << getModel() <<std::endl;
        std::cout << getYear() << std::endl;
        std::cout << getMPG() << std::endl;
    }

car::car(std::string make, std::string model, int year, double MPG, double inputMileage, double inputFuelCap, double inputFuelLvl){
    setMake(make);
    setModel(model);
    setYear(year);
    setMPG(MPG);
    setMilage(inputMileage);
    setFuelCap(inputFuelCap);
    setFuelLevel(inputFuelLvl);
}


 void car::refuel(double gallons){
    if(gallons > 0 && gallons + getFuelLevel() <= getFuelCap()){
        setFuelCap(getFuelLevel() + gallons);
    }
    else if(gallons > 0 && gallons + getFuelLevel() > getFuelCap()){
        setFuelCap(getFuelCap());
    }

 }
    
void car::drive(double distance){
    if(getMPG() * getFuelCap() >= distance){
        std::cout << "Car (" << make << ", " << model << ") is driving!" << std::endl;
        setFuelLevel(getFuelLevel() - distance / getMPG());
        std::cout << "Car now has " << getFuelLevel() << " gallons." << std::endl;
    }
    else{
        std::cout << "Can't drive that far with current fuel level";
    }
}