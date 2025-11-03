#include "Point.hpp"
#include <iostream>
int main(void) {
Point p1(3, 4);
Point p2(5, 4);
Point p3(85, 84);
// Test ==
std::cout << (p1 == p2) << std::endl; // p1.operator==(p2)
if (p1 != p2) {
std::cout << (char) p3[0];
}
else {
std::cout << (char) p3[1];
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
for (int i = 0; i < 185; i++) {
p5[1] -= 2;
}
std::cout << (char) p5[1];

std::cout << std::endl;
std::cout << std::endl;
std::cout << "Day 2 work:" << std::endl;
std::cout << std::endl;


Point pTest1(3,4);

//Test toString()
std::cout << pTest1.toString() << std::endl;

// Test unary operator
Point pTest2 = -pTest1;
std::cout << pTest2.toString() << std::endl;


// Test++
++pTest2;
std::cout << pTest2.toString() << std::endl;
pTest2++;
std::cout << pTest2++.toString() << std::endl;



//todo

Point point3(0,0, "p3");

p3 = p1;

std::cout << point3.toString();

// Test friend function

std::cout << sum_coordinates() << std::endl;

// Test << operator
std::cout << p2 << " " << p3 << std::endl;

return 0;
}
