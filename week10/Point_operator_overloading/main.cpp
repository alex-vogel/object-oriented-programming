#include "Point.hpp"
#include <iostream>

int main(){

    Point p1(3,4);
    Point p2(5,4);
    Point p3(85,43);

    // Test ==

    std::cout << (p1 == p2) << std::endl; //Same as p1.operator==(p2)

    if(p1 != p2){
        std::cout << (char) p3(0);
    }
    else{
        std::cout << (char) p3(1);
    }


    p1[0] = 57;
    std::cout << (char) p1[0];

    p1[0] = p1[0] - 49;
    p2[0] = p2[0] + 4;
    Point p4 = p1 * p2;
    std::cout << (char) (p4[0] + 8);



    Point p5(60, 111);
    p5 += p1;
    std::cout << (char) (p5[1] - 26);

    p5 *= p1;

    for(int i = 0; i < 185; i++){
        p5[1] -= 2;
    }

    std::cout << (char) p5[1];

    return 0;
}