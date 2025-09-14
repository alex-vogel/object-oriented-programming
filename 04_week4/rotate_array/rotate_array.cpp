#include <iostream>


void rotateLeft(const int src[], int dest[], int size, int k); //k is amount of rotations we want
void rotateRight(const int src[], int dest[], int size, int k); //k is amount of rotations we want
// This would turn 1, 2, 3, 4, 5, 6, 7 -> 2, 3, 4, 5, 6, 7, 1

int main(){
    const int SIZE = 9;
    int list[SIZE] = {1,2,3,4,5,6,7,8,9};
    int newList[SIZE];
    rotateLeft(list, newList, SIZE, 1);
    //rotateRight(list, newList, SIZE, 1);
    // Print the totated array
    for(int i : newList){
        std::cout << i << ' ';
    }
    return 0;
}

void rotateLeft(const int src[], int dest[], int size, int k){
    dest[size-1] = src[0];
    for(int i = 0; i < size - 1; i++){
        dest[i] = src[i+1];
    }
    return;
}
void rotateRight(const int src[], int dest[], int size, int k){
    dest[0] = src[size-1];
    for(int i = 1; i <= size - 1; i++){
        dest[i] = src[i-1];
    }
    return;
}