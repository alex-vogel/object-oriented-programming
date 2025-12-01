#include "matrix.hpp"
#include <stdexcept>
#include <iomanip>
#include <iostream>
#include <fstream>

template <typename T>
Matrix<T>::Matrix(int rows, int cols){
    if (rows < 1 || cols < 1){
        this->rows = 0;
        this->cols = 0;
        data = nullptr;
        throw std::logic_error("Rows and cols should be positive\n");
    }
    this->rows = rows;
    this->cols = cols;

    data = new T*[this->rows];
    for(int i = 0; i < this->rows; i++){
        data[i] = new T[this->cols];
    }

    //initialize the values with 0'
    for(int i = 0; i < this->rows; i++){
          for(int j = 0; j < this->cols; j++) {
            data[i][j] = T();
          }
    }

}

template <typename T>
Matrix<T>::~Matrix(){
    for(int i = 0; i < rows; i++){
        delete [] data[i];
    }
    delete [] data;
}


template <typename T>
Matrix<T>::Matrix(const Matrix& other){
    rows = other.rows;
    cols = other.cols;
    // Creates the empty matrix
    data = new T*[this->rows];
    for(int i = 0; i < this->rows; i++){
        data[i] = new T[this->cols];
    }


    // Initialization
    for(int i = 0; i < this->rows; i++){
          for(int j = 0; j < this->cols; j++) {
            data[i][j] = other.data[i][j];
          }
    }
}

template <typename T>
Matrix& Matrix<T>::operator=(const Matrix<T>& other){
    if(data){
        for(int i = 0; i < rows; i++){
        delete [] data[i];
        }
        delete [] data;
    }


    rows = other.rows;
    cols = other.cols;
    // Creates the empty matrix
    data = new T*[this->rows];
    for(int i = 0; i < this->rows; i++){
        data[i] = new T[this->cols];
    }


    // Initialization
    for(int i = 0; i < this->rows; i++){
          for(int j = 0; j < this->cols; j++) {
            data[i][j] = other.data[i][j];
          }
    }

    return *this;
}


template <typename T>
void Matrix<T>::print() const{
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << std::setw(6) << data[i][j];
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}


template <typename T>
Matrix Matrix::load(const char *filename){
    std::ifstream in(filename);
    if (!in){
        throw std::logic_error("File could not be opened\n");
    }
    int r;
    int c;
    in >> r >> c; //Scan two first values from a file

    Matrix m(r, c);

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            in >> m.data[i][j];
        }
        
    }

    in.close();
    return m;
}