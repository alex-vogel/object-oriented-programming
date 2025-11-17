#include <iostream>
#include <stdexcept>
#include <string>


class big_value : public std::logic_error{ //child class of logic error which is child of exception
public:
    big_value(int code = 1, std::string msg = "Error!") : exp_code(code), exp_msg(msg), std::logic_error(msg){

    }


    std::string what() {
        return "Error Code: " + std::to_string(exp_code) + ". " + exp_msg;
    }

private:

    int exp_code;
    std::string exp_msg;

};





class Fraction{
public:
    Fraction(int n = 0, int d = 1) : num(n), denom(d){

    }

    int quotient(){
        if (denom == 0){
            throw "Cannot divide by zero";
        }
        if(num > 100){
            throw big_value(100, "Numerator cannot be greater than 100");
        }
        if((num < 0 && denom > 0) || (num > 0 && denom < 0)){
            throw std::logic_error("Cannot handle negative fractions");
        }
        if (num < -100){
            std::string ex("Error: the numerator is too small");
            throw ex;
        }
        //TODO throw an int exception with code 777 if the result is less than 0
        if((num / denom) < 0){
            throw 777;
        }
        if(num == 999){
            throw 3.14;
        }
        
        return num / denom;

    }

private:
    int num;
    int denom;

};



int main(){
    int n1, n2;
    std::cout << "Enter two integers: ";
    std::cin >> n1 >> n2;
    Fraction f1(n1, n2);
    
    try{
        std::cout << f1.quotient() << std::endl;
    }
    catch(const char *str){ //We catch specifically a string here because we throw a string, we must have it set up to catch what is thrown
        std::cout << str << std::endl;
    }
    catch(std::string str){
        std::cout << str << std::endl;
    }
    catch(int exception){
        std::cout << "error code: " << exception << std::endl;
    }
    catch(double){ // You dont necesarily need to name the thrown exception if you dont need it in the code that handles the exception
        std::cout << "A double was thrown\n";
    }
    catch(const std::exception& ex){ // Issue: This will catch any exception, however if you want to look for a specific type of error
        std::cout << ex.what() << std::endl; // this will catch it first unless the specific catch is higher in the chain of catches.
    }


    catch (...){ //This will catch anything you throw
        std::cout << "Other type of exception\n";
    }


    std::cout << "Execution of the program continues.." << std::endl;

    return 0;
}