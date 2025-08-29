#include <iostream>
#include <random>

int main(){
    // Generating the seed
    std::random_device rd;

    // Initialize a random number engine with a seed
    std::mt19937 eng(rd());

    // Define a distribution
    std::uniform_int_distribution<int> dist(1, 100);
        int sum = 0;
    for(int i = 0; i < 50; i++){
        int x = dist(eng);
        sum += x;

        std::cout << dist(eng) << std::endl;
    }

    std::cout << "The average: " << sum / 50.0 << std::endl;

    return 0;
}