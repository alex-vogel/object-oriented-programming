#include <iostream>
#include <fstream>
#include <iomanip>


int main(){
    // To write into a file we create a special object std::ofstream
    std::ofstream out;
    std::string file_name;
    std::cout << "Enter a file name: ";
    std::cin >> file_name;

    //open the file
    out.open(file_name); //w for write, r for read, a for append

    //Write to the file
    out << "Hello" << std::endl;
    out << "mdmr8" << std::endl;

    for(int i = 1; i < 100; i++){
        out << std::setw(5) << i;
        if(i % 10 == 0){
            out << '\n';
        }
    }

    
    // Close the file
    out.close();

    return 0;
}