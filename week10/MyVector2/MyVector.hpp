#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP


template<typename T>
class MyVector{
    public:
    MyVector(int capacity = 1); // If you use the constructor like a null argument it will automatically be filled as 1, but otherwise will be whats entered
    ~MyVector();
    MyVector(const MyVector& other);

    T getCapacity() const {return capacity; }

    void push_back(const T&value);
    void print() const;

    T pop_back(void);

    //todo
    void push_front(const T&value);

    void pop_front(const T&value);

    T& at(int index);


    private:
    void allocate_memory(int memory_size);

    T *elements;
    int size;
    int capacity;
};


#endif