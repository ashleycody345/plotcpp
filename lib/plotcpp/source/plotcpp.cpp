#include <iostream>
#include "../plotcpp.hpp"
#include <vector>

plotCPP::plotCPP()
{
    // constructor functionality, dont need to do anything now
}

std::string plotCPP::test()
{
    return "called test succesfully...";
}

cppmatrix::cppmatrix(int rows, int cols)
{
    // matrix_{a, b} has a horizontal elements, b vertical elements
    m = rows;
    n = cols;

    // iterate through rows, set size
    data.resize(m);
    for(int i = 0; i < m; i++)
    {
        data[i].resize(n);
    }
}

void cppmatrix::diag()
{
    // row iteration
    for(int i = 0; i < m; i++)
    {
        // col iteration
        for(int j = 0; j < n; j++)
        {
            // std::cout << "inserting at i: " << i << ", j: " << j << std::endl;

            if (i!=j) data[i][j] = 0;
            else data[i][j] = 1;
        }
    }
}

void cppmatrix::disp()
{
    std::cout << "\n";
    // row iteration
    for(int i = 0; i < m; i++)
    {
        // col iteration
        for(int j = 0; j < n; j++)
        {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n";
}