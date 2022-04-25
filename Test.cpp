/**
 * @file Test.cpp
 * @author Tom Koltunov
 * @brief Test cases for 3rd assignment in Software_Systems_B course
 * @date 2022-04
 */

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

    CHECK_NOTHROW(mat1 + mat2);
    CHECK_NOTHROW(mat2 + mat1);

    CHECK_NOTHROW(mat1 += mat2);
    CHECK_NOTHROW(mat2 += mat1);

    CHECK_NOTHROW(+mat1);
    CHECK_NOTHROW(+mat2);

    CHECK_NOTHROW(mat1 - mat2);
    CHECK_NOTHROW(mat2 - mat1);

    CHECK_NOTHROW(mat1 -= mat2);
    CHECK_NOTHROW(mat2 -= mat1);

    CHECK_NOTHROW(-mat1);
    CHECK_NOTHROW(-mat2);

    CHECK_NOTHROW(mat1 * mat2);
    CHECK_NOTHROW(mat2 * mat1);

    CHECK_NOTHROW(mat1 * 0);
    CHECK_NOTHROW(mat2 * 1);

    CHECK_NOTHROW(0 * mat1);
    CHECK_NOTHROW(1 * mat2);

    CHECK_NOTHROW(mat1 *= mat2);
    CHECK_NOTHROW(mat2 *= mat1);

    CHECK_NOTHROW(mat1 *= 0);
    CHECK_NOTHROW(mat2 *= 1);

    vector<double> vec3 = {1, 0, 0, 1};
    vector<double> vec4 = {0, 0, 0, 0};
    Matrix mat3(vec3, 2, 2);
    Matrix mat4(vec4, 2, 2);

    CHECK_NOTHROW(mat3 + mat4);
    CHECK_NOTHROW(mat4 + mat3);

    CHECK_NOTHROW(mat3 += mat4);
    CHECK_NOTHROW(mat4 += mat3);

    CHECK_NOTHROW(+mat3);
    CHECK_NOTHROW(+mat4);

    CHECK_NOTHROW(mat3 - mat4);
    CHECK_NOTHROW(mat4 - mat3);

    CHECK_NOTHROW(mat3 -= mat4);
    CHECK_NOTHROW(mat4 -= mat3);

    CHECK_NOTHROW(-mat3);
    CHECK_NOTHROW(-mat4);

    CHECK_NOTHROW(0 * mat3);
    CHECK_NOTHROW(1 * mat4);

    vector<double> vec5 = {1};
    vector<double> vec6 = {0};
    Matrix mat5(vec5, 1, 1);
    Matrix mat6(vec6, 1, 1);

    CHECK_NOTHROW(mat5 + mat6);
    CHECK_NOTHROW(mat6 + mat5);

    CHECK_NOTHROW(mat5 += mat6);
    CHECK_NOTHROW(mat6 += mat5);

    CHECK_NOTHROW(+mat5);
    CHECK_NOTHROW(+mat6);

    CHECK_NOTHROW(mat5 - mat6);
    CHECK_NOTHROW(mat6 - mat5);

    CHECK_NOTHROW(mat5 -= mat6);
    CHECK_NOTHROW(mat6 -= mat5);

    CHECK_NOTHROW(-mat5);
    CHECK_NOTHROW(-mat6);

    CHECK_NOTHROW(0 * mat5);
    CHECK_NOTHROW(1 * mat6);
}

TEST_CASE("Bad inputs")
{
    vector<double> vec = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    for (int i = 1; i <= 20; i++)
    {
        CHECK_THROWS(Matrix mat(vec, i, i + 1));
    }
}