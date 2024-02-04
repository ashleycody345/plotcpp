// block several defns of lib content
#ifndef PLOTCPP_HEAD
#define PLOTCPP_HEAD
#include <vector>

// all functions are called through plotCPP class, contains functions and internal values

class plotCPP 
{
    private:


    public:
    plotCPP(); // constructor for holding values
    std::string test();

    

};

class cppmatrix 
    {
        private:
        std::vector<std::vector<float>> data;

        // matrix has dimensions m by n, always check to see that functions are fitting these dimensions
        // these also should not change ever!!
        int m;
        int n;

        public:
        cppmatrix(int rows, int cols);
        void diag(); // fills matrix with zeros, with ones on the diagonal
        void disp();
        
    };

#endif