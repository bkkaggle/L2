#include <iostream>
#include <vector>

#include "include/L2.h"

int main()
{

    std::vector<double> x{1, 2, 3, 4, 5, 6, 7, 8};
    // std::vector<double> y{3, 4, 5, 6, 7, 8, 9, 10};

    L2::Tensor<double> xx = L2::Tensor<double>(x, {2, 2, 2});
    // L2::Tensor<double> yy = L2::Tensor<double>(y, {2, 2, 2});

    // L2::Tensor<double> z = L2::matmul(xx, yy);

    L2::Tensor<double> z = xx.unsqueeze(-1);

    z.print();

    return 0;
}