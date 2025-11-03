#ifndef POINT_H
#define POINT_H

class Point {
public:

    Point(int x , int y);

    //Logic operator
    bool operator==(const Point& other) const;

    int& operator[](int index);

    bool operator!=(int index) const;


    // Arithmetic operator
    Point operator+(const Point& other) const;

        //Arithmetic assignment operator.
    Point& operator+=(const Point& other);

private:
    int x;
    int y;

};


#endif