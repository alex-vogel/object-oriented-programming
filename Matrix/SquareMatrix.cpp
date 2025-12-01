#include "SquareMatrix.hpp"

template <typename T>
SquareMatrix::SquareMatrix(int n = 1) : Matrix<T>(n, n) {
    
}

template <typename T>
SquareMatrix::SquareMatrix<T> load(const char *filename){
if(this->data){
        for(int i = 0; i < rows; i++){
        delete [] this->data[i];
        }
        delete [] this->data;
    }


    rows = other.rows;
    cols = other.cols;
    // Creates the empty matrix
    data = new T*[this->rows];
    for(int i = 0; i < this->rows; i++){
        this->data[i] = new T[this->cols];
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
SquareMatrix::SquareMatrix<T> operator=(const SquareMatrix<T> &m){


}
