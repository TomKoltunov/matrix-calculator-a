#include "Matrix.hpp"
using namespace std;

namespace zich
{
    Matrix::Matrix(const vector<double>& mat, int length, int width)
    {

    }

    Matrix::Matrix(const Matrix& mat)
    {

    }
    
    Matrix Matrix::operator+(const Matrix& other) const
    {
        return *this;
    }

    Matrix& Matrix::operator+=(const Matrix& other)
    {
        return *this;
    }

    Matrix Matrix::operator+() const
    {
        return *this;
    }

    Matrix Matrix::operator-(const Matrix& other) const
    {
        return *this;
    }

    Matrix& Matrix::operator-=(const Matrix& other)
    {
        return *this;
    }

    Matrix Matrix::operator-() const
    {
        return *this;
    }

    Matrix Matrix::operator*(const Matrix& other) const
    {
        return *this;
    }

    Matrix& Matrix::operator*=(double number)
    {
        return *this;
    }

    bool Matrix::operator>(const Matrix& mat) const
    {
        return false;
    }

    bool Matrix::operator>=(const Matrix& mat) const
    {
        return false;
    }

    bool Matrix::operator<(const Matrix& mat) const
    {
        return false;
    }

    bool Matrix::operator<=(const Matrix& mat) const
    {
        return false;
    }

    bool Matrix::operator==(const Matrix& mat) const
    {
        return false;
    }

    bool Matrix::operator!=(const Matrix& mat) const
    {
        return false;
    }

    Matrix& Matrix::operator++()
    {
        return *this;
    }

    Matrix& Matrix::operator--()
    {
        return *this;
    }

    Matrix Matrix::operator++(int number)
    {
        return *this;
    }

    Matrix Matrix::operator--(int number)
    {
        return *this;
    }

    ostream& operator<< (ostream& output, const Matrix& mat)
    {
        
    }

    // Matrix Matrix::operator*(double number, Matrix& mat)
    // {
    //     Matrix answer(mat._mat, mat._length. mat._width);
    //     return answer;
    // }
}