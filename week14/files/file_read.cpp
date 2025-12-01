#include <iostream>
#include <fstream>
#include <iomanip>


int main(){
    // To write into a file we create a special object std::ofstream
    std::ifstream in;
    std::string file_name;
    std::cout << "Enter a file name: ";
    std::cin >> file_name;

    //open the file
    in.open(file_name); //w for write, r for read, a for append


    //Check if the file exists
    if(in.fail()){
        std::cout << file_name << "could not be opened" << std::endl;
        return 1; //error
    }

    // Reading from a file
    std::string first_line;
    std::string second_line;

    getline(in, first_line);
    getline(in, second_line);
    


    int num;
    int sum = 0;
    while (in >> num){
        std::cout << num << ' ';
        sum += num;
    }
std::cout << first_line << " A+ code: " << second_line << std::endl;

std::cout << "Sum: " << sum << std::endl;
/*
    for(int i = 1; i < 100; i++){
        out << std::setw(5) << i;
        if(i % 10 == 0){
            out << '\n';
        }
    }
*/
    
    // Close the file
    in.close();

    return 0;
}