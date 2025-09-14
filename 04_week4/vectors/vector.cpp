#include <iostream>
#include <vector>

void print(const std::vector<int>& v);

void rotateRight(std::vector<int>& v, int k);

void rotateLeft(std::vector<int>& v, int k);


int main(){
    // Create a vector (initialization list)
    std::vector<int> v {1, 2, 3, 4, 5, 6};
    print(v);


    //Create with size and default value
    std::vector<int> v2(5, 10); //Creates vector with 5 elements, each set to 10
    print(v2);


    //Create a copy from another vector
    std::vector<int> v3(v);
    print(v3);


    //print current number of elements in the vector
    std::cout << v3.size();
    

    std::cout << std::endl;
    
    //Front and back
    std::cout << "Front " << v3.front() << std::endl;
    std::cout << "Back " << v3.back() << std::endl;


    // Add to the end
    v3.push_back(7); //This will add 7 to the end of the vector
    v3.push_back(8); //Adds 8 to the end

    //Remove the last element
    v3.pop_back();
    print(v3);


    // Iterators - an object that enables traversal over elements.
    /*
        begin(): points to the first element 
        end(): points to one past the last element [technically points outside of the vector]

    */

    // Insert an element (iterator, value);
    v3.insert(v3.begin(), 100); //This puts 100 in the first spot of the vector, pushing everything forward
    print(v3);

    // Insert in the middle
    v3.insert(v3.begin() + (v3.size() / 2), 999);
    print(v3);

    // Erase (iterator)
    v3.erase(v3.begin() + 1); // Removes the second element in the vector
    print(v3);


    rotateRight(v3, 2);
    print(v3);
    rotateLeft(v3, 2);
    print(v3);

    return 0;
}


void print(const std::vector<int>& v){
    for (int el : v){
        std::cout << el << ' ';
    }
    std::cout << std::endl;
    
}


void rotateRight(std::vector<int>& v, int k){

    k %= v.size();
    while(k) {
        // First step: Take last element and put it in the first
        v.insert(v.begin(), v.back());
        // Delete the last element (now in the front)
        v.pop_back();
        k--;
        }

    

}

void rotateLeft(std::vector<int>& v, int k){
    k %= v.size();
    while(k) {
        // First step: Take first element, put it at the last
        v.insert(v.end(), v.front());
        v.erase(v.begin());
        k--;
    }

}