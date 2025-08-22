#include <iostream>
#include <string>

int main(){
    int age = 25;
    double gpa = 3.5;
    char grade = 'A';
    std::string name = "Alex"; //string requires <strings> header
    bool isActive = true;
    //scan input
    std::cout<< "Enter your name" << std::endl;
    getline(std::cin, name);


    //scan data
    std::cout << "Enter your age and GPA: ";
    std::cin >> age >> gpa;

    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << grade << std::endl
;
    return 0;
}