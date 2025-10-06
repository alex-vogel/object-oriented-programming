// Header File (.hpp, .h)
// Description of the class



/*
TODO:
add:
mileage: the odometer of the car - how many miles are on the car
fuel_capacity: tank capacity of the car
fuel_level: Current Fuel in gallons 


Methods:
void refuel(double gallons); Is there enough room in tahnk for this gas?
void drive(double distance); if car has enough fuel to drive the distance, print "Car (make, model) is driving!" -> Gallons should
                                                                                                    be subrtacted from fuel tank

*/
#ifndef CAR_H //If this isnt defined
#define CAR_H //then define:
#include <string>

class car{
public:
    // Constructors
    car(); // no-arg
    car(std::string make, std::string model, int year, double MPG, double inputMileage, double inputFuelCap, double inputFuelLvl);


    //Getters -> Usually defined as constant methods which cant modify class properties
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;
    double getMileage() const;
    double getFuelCap() const;
    double getFuelLevel() const;

    //Setters
    void setMake(std::string newMake);
    void setModel(std::string newModel);
    void setYear(int newYear);
    void setMPG(double newMPG);
    void setMilage(double newMileage);
    void setFuelCap(double newFuelCapacity);
    void setFuelLevel(double fuelLevel);


    // Other methods
    void print(void) const; //wont modify the properties of the car
    
    void refuel(double gallons);
    
    void drive(double distance);

private:
    std::string make;
    std::string model;
    int year;
    double MPG;
    double mileage; 
    double fuel_capacity;
    double fuel_level;

    
};

#endif //end definition