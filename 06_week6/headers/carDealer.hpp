#include "car.hpp"
#include <vector>

class carDealer{
public:
    void showInventory() const; 
    void addCar(const car& car); // Adds the car object to the inventory

    std::vector<car> getInventory() const{return inventory;}

private:
    std::vector<car> inventory;
};