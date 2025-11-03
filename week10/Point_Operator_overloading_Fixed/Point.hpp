#ifndef POINT_H
#define POINT_H
#include <string>
#include <iostream>
class Point {
public:
Point(int x = 0, int y = 0, const char *tag = nullptr);

~Point();

Point(const Point& other);

// Logic operator
bool operator==(const Point& other) const;
bool operator!=(const Point& other) const;
// Arithmetic operator
Point operator+(const Point& other) const;

//subscript operator
int& operator[](int index);

Point& operator+=(const Point& other);
Point& operator*=(const Point& other);

Point operator*(const Point& other) const;

std::string toString() const;

//Unary operator
Point operator-();


//Increment operator
Point operator++(); //Pre
Point operator++(int ); //Post


//TODO Decrement


// Assignment operator
void operator=(const Point& other);


    // Friend function
    //friend int sum_coordinates(); //Because this is a friend, it can access all the private properties
    friend int sum_coordinates();

    friend std::ostream& operator<<(std::ostream& out, Point& point);
    // TODO
    friend std::istream& operator>>(std::istream& in, Point& point);
 
private:
int x;
int y;
char *tag;
};

//std::ostream& operator<<(std::ostream& out, Point& point);
int sum_coordinates();

#endif 
