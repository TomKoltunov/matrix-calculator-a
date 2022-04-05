#include <iostream>
#include <vector>

using namespace std;

namespace zich
{
    class Matrix
    {
        private:
            vector<double> _mat;
            int _length;
            int _width;

        public:
            Matrix(const vector<double>& mat, const int& length, const int& width); 
            
            Matrix(const Matrix& mat);

            Matrix operator+(const Matrix& other) const;
            Matrix& operator+=(const Matrix& other);
            Matrix& operator+() const;

            Matrix operator-(const Matrix& other) const;
            Matrix& operator-=(const Matrix& other);
            Matrix& operator-() const;

            bool operator>(const Matrix& mat) const;
            bool operator>=(const Matrix& mat) const;
            bool operator<(const Matrix& mat) const;
            bool operator<=(const Matrix& mat) const;
            bool operator==(const Matrix& mat) const;
            bool operator!=(const Matrix& mat) const;

            Matrix& operator++();
            Matrix& operator--();
            Matrix operator++(int number);
            Matrix operator--(int number);

            

            Matrix& operator*(const Matrix& other) const;

            Matrix& operator*=(double number);

            friend ostream& operator<< (ostream& output, const Matrix& mat);
            friend istream& operator>> (istream& input , Matrix& mat);
            friend Matrix operator*(double number, const Matrix& mat);
    };
}