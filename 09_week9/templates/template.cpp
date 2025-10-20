#include <iostream>
#include <vector>

// A template function
template <typename T>
T largest(const T& n1, const T& n2, const T& n3); // All arguments have the same type.


// Find the maximum in a vector (template function)
template <typename T>
T findMax(std::vector<T>& v);


//Template class
template<typename T1, typename T2>
class Pair{
public:
    Pair(T1 f, const T2 s) : first(f), second(s) {};

    //Getters
    T1 getFirst() const{
        return first;
    }

    T2 getSecond() const{
        return second;
    }


    //Setters
    void setFirst(const T1& first){
        this->first = first;
    }

    void setSecond(const T2& second){
        this->second = second;
    }



private:
    T1 first;
    T2 second;

};



// Create a template function that takes 2 arguments of any type and returns a pair of those args
template<typename T1, typename T2>
Pair<T1, T2> createPair(const T1& f, const T2& s){
    
}
}



int main(){
    
    int n1 = 1, n2 = 2, n3 = 5;
    std::cout << largest(n1, n2, n3) << std::endl;

    double d1 = 11.5, d2 = 2.33, d3 = 5.67;
    std::cout << largest(d1, d2, d3) << std::endl;

    std::vector<std::string> v = {"Hello", "Bye", "Good Morning"};
    std::cout << findMax(v) << std::endl;

    //Create an object of pair class
    Pair<int, std::string> p(1, "Jelly");

    std::cout << p.getFirst() << " " << p.getSecond() << std::endl;


    return 0;
}

template <typename T>
T largest(const T& n1, const T& n2, const T& n3){
    if (n1 >= n2 && n1 >= n3){
        return n1;
    }
    else if (n2 >= n3){
        return n2;
    }
    else{
        return n3;
    }
}


template <typename T>
T findMax(std::vector<T>& v){
    if (v.empty()){
        //Throw an exception
        throw "Empty vecetor";
    }
    T max = v[0];
    for(const T& el : v){
        if(el > max){
            max = el;
        }
    }

    return max;
}