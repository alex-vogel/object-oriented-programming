/*
#include <iostream>
#include <vector>
int numberOfDuplicates(const std::vector<int>& nums);
void printVector(const std::vector<int>& nums);


int main(){
    std::vector<int> test {1, 1, 1, 1, 1, 1};
    
    printVector(test);
    std::cout << "It has " << numberOfDuplicates(test) << " duplicate(s)";
    return 0;
}
    */


int numberOfDuplicates(const std::vector<int>& nums){
    std::vector<int>repeats;
    int repeatCounter = 0;
    int currentlyTesting = (nums[0]);

    for(int i = 1; i < nums.size(); i++){
            if(nums[i] == currentlyTesting){
                repeatCounter++;
                
            }
            currentlyTesting = nums[i];
    }
    return repeatCounter;
}


void printVector(const std::vector<int>& nums){
    std::cout <<"The Vector is {";
    for(int i = 0; i < nums.size() - 1; i++){
        std::cout << " " << nums[i] << ",";
    }
    std::cout << " " << nums[nums.size() - 1];
    std::cout<< " }";
}