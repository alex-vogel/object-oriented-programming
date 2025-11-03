#include "Point.hpp"
#include <cstring>

Point::Point(int x, int y, const char *tag) {
this->x = x;
this->y = y;
if (tag) {
    int size = strlen(tag);
    this->tag = new char[size+1];
    strcpy(this->tag, tag);
}
else{
    this->tag = nullptr;
}
}

Point::Point(const Point& other){
    x = other.x;
    y = other.y;
    if (other.tag){
        int size = strlen(other.tag);
        this->tag = new char[size+1];
        strcpy(this->tag, other.tag);
    }
    else{
        tag = nullptr;
    }
}


Point::~Point(){
    if (tag){
        delete [] tag;
    }
}

bool Point::operator==(const Point& other) const {
return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const {
return !(*this == other);
}

int& Point::operator[](int index) {
return (index == 0) ? x : y;
}

Point Point::operator+(const Point& other) const {
return Point(x + other.x, y + other.y);
}

Point Point::operator*(const Point& other) const{
    return Point(x * other.x, y * other.y);
}

Point& Point::operator*=(const Point& other) {
    x *= other.x;
    y *= other.y;
    return *this;
}

Point& Point::operator+=(const Point& other){
    x += other.x;
    y += other.y;
    return *this;
} 

std::string Point::toString() const{

    return "("+std::to_string(x)+", "+std::to_string(y)+ ")";
}


Point Point::operator-(){
    return Point(-x, -y);
}


void Point::operator=(const Point& other){
    x = other.x;
    y = other.y;

    if(tag){
        delete [] tag;
    }

    if(other.tag){
        int size = strlen(other.tag);
        tag = new char[size + 1];
        strcpy(tag, other.tag);
    }
    else{
        tag = nullptr;
    }


}


// Preincrement, adds 1 before any operators
Point Point::operator++(){
    x+= 1;
    y+= 1;
    return *this;
}
//Postincrement
Point Point::operator++(int ){
    Point temp(*this); //Creates a copy of the current point
    this->x+= 1;
    this->y+= 1;
    return temp;
}


int sum_coordinates(){
    Point p(3,5,"p");
    return p.x + p.y;
}



std::ostream& operator<<(std::ostream& out, Point& point){
    out << point.toString();
    return out;
}

std::istream& operator>>(std::istream& in, Point& point){
     int xVal, yVal;
    std::string tagStr;

    std::cout << "Enter x y [tag]: ";
    in >> xVal >> yVal;

    // If the user typed a tag, grab it too
    if (in.peek() == ' ') {
        in >> tagStr;
    } else {
        tagStr = "";
    }

    point.x = xVal;
    point.y = yVal;

    if (point.tag) {
        delete[] point.tag;
        point.tag = nullptr;
    }

    if (!tagStr.empty()) {
        point.tag = new char[tagStr.size() + 1];
        strcpy(point.tag, tagStr.c_str());
    }

    return in;

}