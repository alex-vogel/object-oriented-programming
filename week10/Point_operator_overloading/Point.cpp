#include "Point.hpp"

Point::Point(int x = 0, int y = 0){
        this->x = x;
        this->y = y;
    }


bool Point::operator==(const Point& other) const{
    return (x == other.x && y == other.y);
}



int& Point::operator[](int index){
    return (index == 0) ? x : y;
}

bool Point::operator!=(int index) const{
    return !(*this == index);
}

Point Point::operator+(const Point& other) const{
    return Point(x + other.x, y + other.y);
}

Point& Point::operator+=(const Point& other){
    return Point(x + other.x, y + other.y);
}
