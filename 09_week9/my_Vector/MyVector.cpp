#include "MyVector.hpp"
#include <iostream>

MyVector::MyVector(int capacity) : size(0) { //Initial value should only be inialized in the hpp file
    this->capacity = capacity;
    elements = new int[capacity];
}

MyVector::~MyVector() {
    delete [] elements;
}

MyVector::MyVector(const MyVector& other){
    size = other.size;
    capacity = other.capacity;
    elements = new int[capacity];

    for(int i = 0; i < size ; ++i){
        elements[i] = other.elements[i];
    }

}

void MyVector::push_back(int value){
    if(size >= capacity){
        allocate_memory(capacity*2);
    }
    elements[size]=value;
    size++;
}

/*
void MyVector::push_back(int value) {
    if(size == capacity){
        int newCapacity = capacity + capacity;
        int *newElements = new int[newCapacity];

        for(int j = 0; j < size; j++){
            newElements[j] = elements[j];
        }
        delete [] elements;
        elements = newElements;
        capacity = newCapacity;

    }

    elements[size] = value;
    size++;
}
    */

//This one is optional the copy and pushback are NOT optional
//Implement a void method pop_back to delete the last element in the vector/array. Capacity should not be greater than double size


void MyVector::print() const{
    std::cout << "[";
    for (int i = 0; i < size; i++){
        std::cout << elements[i] << " ";
    }
    std::cout<< "]\n";
}


void MyVector::allocate_memory(int memory_size){
    capacity = memory_size;
    int *old = elements;
    elements = new int[memory_size];

    for(int i = 0; i < size; i++){
        elements[i] = old[i];
    }

    delete [] old;

}


int MyVector::pop_back(void){
    if(size > 0){
        if(size - 1 < (capacity / 2)){
            allocate_memory((capacity / 2));
        }


        return elements[--size];
    }
    else{
        // Throw an exception
        // When a function cant solve a problem it gives up and throws an exception
        throw "The vector is empty!";
    }

}

int& MyVector::at(int index){
    if(index < 0 || index > size - 1){
        throw "Invalid index";
    }
    else{
        return elements[index];
    }
}