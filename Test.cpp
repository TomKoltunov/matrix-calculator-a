/**
 * @file Test.cpp
 * @author Tom Koltunov
 * @brief Test cases for 3rd assignment in Software_Systems_B course
 * @date 2022-04
 */

#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "Matrix.hpp"
using namespace doctest;
using namespace std;
using namespace zich;

TEST_CASE("Good inputs")
{
    vector<double> vec1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    vector<double> vec2 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    Matrix mat1(vec1, 3, 3);
    Matrix mat2(vec2, 3, 3);

    CHECK_NOTHROW(+mat1);
    CHECK_NOTHROW(+mat2);

    CHECK_NOTHROW(mat1 += mat2);
    CHECK_NOTHROW(mat2 += mat1);

    CHECK_NOTHROW(-mat1);
    CHECK_NOTHROW(-mat2);

    CHECK_NOTHROW(mat1 -= mat2);
    CHECK_NOTHROW(mat2 -= mat1);

    CHECK_NOTHROW(0 * mat1);
    CHECK_NOTHROW(1 * mat1);
}

TEST_CASE("Bad inputs")
{
    vector<double> vec = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    for (int i = 1; i <= 10; i++)
    {
        Matrix mat(vec, i, i + 1);
        CHECK_THROWS(mat);
    }
}