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

    // Constructor
    // -Constructors have no return type.
    // -Constructors are called when the object is created
    // -Constructors should be public
    // -Constructors cannot be called explicitely.
    
    // No-argument constructor (first version)
/*    Route(){
        length = 0;
    }
*/
    // No - argument constructor (second version)
    Route() : length(0){

    }
    
    // Overloaded constructor:
    Route(std::string source_, std::string destination_){
        setSource(source_);
        setDestination(destination_);
    }


    // Get functions (getters, accessor functions)
    std::string getSource(void){
        
        return source;
    }
    std::string getDestination(void){
        
        return destination;
    }
    int getLength(void){
        return length;
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

    //Thhis function returns whether the route is long or not
    bool isLong();
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

    //Create fall object with constructor with argument
    Route christmasTrip("Orlando", "London");
    christmasTrip.print();

            /*
            Review:
            Route route1; //No argument constructor
            Route route2("A", "B"); // Constructor with arguments
            Route route3 = Route() // No argument contructor
            Route route4 = Route("C", "D");

            Route route5(); // DOES NOT WORK -> This is a function prototype.
            */

        std::cout << christmasTrip.isLong() << std::endl;

    return 0;
}

// Method implementation
bool Route::isLong(){
    if(getLength() > 300){
        return true;
    }
    else{
        return false;
    }
}