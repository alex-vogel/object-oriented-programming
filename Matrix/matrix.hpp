#ifndef MATRIX_HPP
#define MATRIX_HPP //inclusion guard



template <typename T>
class Matrix{
public:
    Matrix(int rows = 1, int cols = 1);


    virtual ~Matrix(); //destructor

    Matrix(const Matrix& other); //copy constructor

    Matrix& operator=(const Matrix<T>& other);

    void print() const; 

    Matrix<T> load(const char *filename);

protected:
    int rows;
    int cols;
    T **data; //Array of pointers, each pointer points to another array containing each value

};



#endif