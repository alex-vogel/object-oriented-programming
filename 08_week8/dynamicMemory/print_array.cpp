#include <iostream>
#define SIZE 5

void printArr(int *arr, int size);
int* doubleArr(int *arr, int size);
int* doubleArrNew(const int *arr, int size);

int main() {
int arr[SIZE] = {1, 2, 3, 4, 5};
printArr(arr, SIZE);
doubleArr(arr, SIZE);
printArr(arr, SIZE);

int *pArr = doubleArr(arr, SIZE);
printArr(pArr, SIZE);

std::cout << "print new array\n";
int *pArr2 = doubleArrNew(arr, SIZE);
printArr(pArr2, SIZE);
delete [] pArr2; // de-allocates the memory allocated for new_arr which is pointed to by pArr2

return 0;
}


void printArr(int *arr, int size) {
for(int i = 0; i < size; i++) {
std::cout << arr[i] << ' ';
}
std::cout << std::endl;
}

int* doubleArr(int *arr, int size){
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }

    return arr;
}

int* doubleArrNew(const int *arr, int size){
    int *new_array = new int[size];
    for(int i = 0; i < size; i++) {
        new_array[i] = arr[i] * 2;
    }

    return new_array;
}
