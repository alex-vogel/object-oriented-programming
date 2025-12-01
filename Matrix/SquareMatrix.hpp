#ifndef SQUAREMATRIX_HPP
#define SQUAREMATRIX_HPP

template <typename T>
class SquareMatrix : public Matrix<T>{
    SquareMatrix(int n = 1);

    SquareMatrix<T> load(const char *filename);

    SquareMatrix<T> operator=(const SquareMatrix<T> &m);

};


#endif