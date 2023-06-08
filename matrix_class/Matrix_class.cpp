#include <iostream>
#include "Matrix_class.h"


Matrix_class::Matrix_class()
{
    std::cout << "Default constructor\n";
}


Matrix_class::Matrix_class(int r, int c)
{
    std::cout << "Parametrized constructor\n";
    row = r;
    column = c;

    p = new int* [row];

    for (int i = 0; i < row; i++)
    {
        p[i] = new int[column];
    }
}


Matrix_class::~Matrix_class()
{
    std::cout << "Destructor\n";

    for (int i = 0; i < row; i++)
    {
        delete[] p[i];
    }
    delete[] p;
}


void Matrix_class::initializeMatrix()
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            p[i][j] = rand() % 100 + 1;
        }
    }
}

void Matrix_class::changeRows(int k, int g)
{
    for (int i = 0; i <= column; i++)
    {
        int tmp = p[k][i];
        p[k][i] = p[g][i];
        p[g][i] = tmp;
    }
}


void Matrix_class::changeColumns(int k, int g)
{
    for (int i = 0; i < row; i++)
    {
        int tmp = p[i][k];
        p[i][k] = p[i][g];
        p[i][g] = tmp;
    }
}


void Matrix_class::printMatrix()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cout << "p[" << i << "][" << j << "] = " << p[i][j] << "\n";
        }
    }
}
