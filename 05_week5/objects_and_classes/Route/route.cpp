#include <iostream>
#include <ctime>
#include <string>

// Create a route struct
class Route {    //could also make this class Route{}. in structures everything is public by default, in classes everything is private
private: //Access specifier
    std::string source;
    std::string destination;         //Everything between private and public are private here. This cant be accessed outside of the struct
    int length;

    void updateLength(void){
        length = (source.empty() || destination.empty()) ? 0: rand() % 900 + 75; //Imagine this is our access to the database with real info
    }


    public://Access specifier 

    // Get functions (getters, accessor functions)
    std::string getSource(void){
        
        return source;
    }
    std::string getDestination(void){
        
        return destination;
    }


    //Set function (mutator functions)
    void setSource(std::string new_source){
        source = new_source;
        updateLength();
    }
    void setDestination(std::string new_destination){
        destination = new_destination;
        updateLength();
    }

    //functions in a structure are called methods
    void print(){
        std::cout << source  << " -> " << destination << ": " << length <<  std::endl;
    }

};



int main(){
    srand(time(0)); //Set the seed of random number
    //Create an object of Route
    Route fall_trip;
//    fall_trip.source = "Lakeland";
//    fall_trip.destination = "Paris";

    fall_trip.setSource("Lakeland");
    fall_trip.setDestination("Paris");

    fall_trip.print();

    fall_trip.setDestination("New York");
    fall_trip.print();
    return 0;
}