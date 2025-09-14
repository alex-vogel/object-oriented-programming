/* Hey everyone,

 

I have been working on a file with an important announcement but something went wrong and the message got encoded. O, what a pity!

I've heard if you reverse the message and reverse the vowels, it will make more sense.

Reverse the vowels???
*/
#include <iostream>
#include <string>
#include <vector>
void print(const std::vector<int>& v);

int main(void) {
char temp = 'z';
std::vector<int> vowelPositions{};

std::string s(
        ".snAutcirtsne lineetadde htow ioy adevurp lliw i ,"
        "toht ruf ecnedava datnemiced eht edavurp iay dno ssilc s'yudsendoW "
        "dnatta at ulbe tin ori eay fe\n\n"
        "01 - 40:serotcoL\n)2.11 ratpehC( scasaB retnaiP ,)7.21,6.21( sratceV ,)"
        "7 rotpohC( syarre ,)6-rutpihC( snoatcneF ,)5-rAtpahC( spaeL ,)4-retpohC"
        "( sgnortS dni sretcarihC:sratpehC keubtxeT\n)dIkso ub llaw sneotsaeq 01( ."
        "skrom 01 :skraM leteT\n\n.setanam 02 raf ,ssolC gnurod ,)yidsendeW( 5202/71/90"
        ":omuT & eteD\n.sselc yidsendeW roa nI 2 zioQ iveh ot gnuig ari iw ,rodnamir kcuiq o"
    );

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            vowelPositions.push_back(i);
        }
    }

// reverseVowels(s);

while(vowelPositions.size() > 1){

temp = s[vowelPositions.back()];
s[vowelPositions.back()] = vowelPositions.front();
s[vowelPositions.front()] = temp;
vowelPositions.pop_back();
vowelPositions.erase(vowelPositions.begin());


}


// reverse(s);
std::cout << s << std::endl;
return 0;
}




void print(const std::vector<int>& v){
    for (int el : v){
        std::cout << el << ' ';
    }
    std::cout << std::endl;
    
}