#include <iostream>
#include "lib/plotcpp/plotcpp.hpp"

using namespace std;

int main()
{
    plotCPP my_plot;
    // string func_str = my_plot.test();
    // cout << func_str << endl;

    cppmatrix my_matrix(3, 3);

    my_matrix.diag();
    my_matrix.disp();

    cppmatrix new_matrix(2, 4);
    new_matrix.diag();
    new_matrix.disp();
    return 0;
}