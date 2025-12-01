#include "matrix.hpp"
#include "matrix.cpp"
#include "SquareMatrix.hpp"
#include "SquareMatrix.cpp"

int main(){
    Matrix<int> m;
    m = m.load("data.txt");
    m.print();


    SquareMatrix<double> sm;
    sm = sm.load("data2.txt");
    sm.print();

    return 0;
}