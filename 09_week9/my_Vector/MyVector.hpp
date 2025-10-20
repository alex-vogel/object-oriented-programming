#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector{
    public:
    MyVector(int capacity = 1); // If you use the constructor like a null argument it will automatically be filled as 1, but otherwise will be whats entered
    ~MyVector();
    MyVector(const MyVector& other);

    int getCapacity() const {return capacity; }

    void push_back(int value);
    void print() const;

    int pop_back(void);

    //todo
    void push_front(int value);

    void pop_front(int value);

    int& at(int index);


    private:
    void allocate_memory(int memory_size);

    int *elements;
    int size;
    int capacity;
};


#endif