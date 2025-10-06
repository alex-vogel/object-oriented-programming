#include <iostream>
#include <iomanip>
#include <unistd.h>


int main(){

    int counter = 1;
    double denominator = 3.0;
    double almostPi = 1.0;

    while(true){
        
        if(counter % 2 == 0){
            almostPi = almostPi + 1/denominator;
        }
        else{
            almostPi = almostPi - 1/denominator;
        }
        counter++;
        denominator = denominator + 2;


        if(counter % 10 == 0){
          std::cout << std::setprecision(20) << almostPi*4 << std::endl;  
        }
    }

    return 0;
}