#include <iostream>
#include <Eigen/Core>
#include <Eigen/Dense>




float SumArray(  Eigen::ArrayXf& v)
{
    auto sum=v[0];
    // сумма элементов массива
    for (auto x : v)
        sum+= x;

    return sum;
}