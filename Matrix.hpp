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

            friend ostream& operator<< (ostream& output, const Matrix& mat);
            friend istream& operator>> (istream& input , Matrix& mat);
    };
}