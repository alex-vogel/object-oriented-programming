#include <iostream>
#include <fstream>

//What if we want to count how many characters the file has?

int main(int argc, char* argv[]){ //argc is argument count, how many arguments do we have? argv is a list of all the arguments sent

if (argc != 2){
    std::cout << "Usage: " << argv[0] << " <file_name>\n";
    return 1;
}
for(int i = 0; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }


    std::string file_name(argv[1]);
    std::ifstream in;
    //open the file
    in.open(file_name);

    if(in.fail()){
        std::cout << file_name << "could not be opened" << std::endl;
        return 1; //error
    }

    char ch;
    int count_chars = 0;
    int numOfLines = 1;
    while (!in.eof()){
        ch = in.get(); //Gets one character from a file

        if(ch == '\n'){
            numOfLines++;
        }


        if(ch != ' ' && ch != '\n' && ch != EOF){
            count_chars++;
        }
    }

    std::cout << file_name << " has " << count_chars << " characters.\n";


    //TODO count the number of lines:

    std::cout<< "number of lines: " << numOfLines << std::endl;



    in.close();

    return 0;
}