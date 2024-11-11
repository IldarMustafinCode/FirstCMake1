#include <iostream>
#include <Eigen/Core>
#include <Eigen/Dense>


float SumArray(  Eigen::ArrayXf& v)
{
    float sum=0;
    // сумма элементов массива
    for (auto x : v)
        sum+= x;

    return sum;
}