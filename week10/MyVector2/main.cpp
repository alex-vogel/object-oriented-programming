#include "MyVector.hpp"
#include "MyVector.cpp" //for template classes you must also include the cpp file in your main


int main(){

    MyVector<int> mv;
    mv.push_back(100);
    //mv.push_front(1); This version of MyVector doesnt have pushfront

    mv.print();


    return 0;

}