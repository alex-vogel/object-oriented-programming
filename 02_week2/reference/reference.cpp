#include <iostream>
#include <string>
#include <cctype> //to include c librarys just put c infront of it ie ctype.h -> cctype

char title(std::string s);

int main(){
    std::string s1 = "hello";
    title(s1);
    std::cout << s1 << std::endl;
    return 0;
}

char title(std::string s){
    s[0] = toupper(s[0]);
    return s[0];
}