#include <iostream>
#include "Matrix_class.h"


int main()
{
    int size; //square
    Matrix_class ob;

    std::cout << "Enter the size of a matrix\n";

    std::cin >> size;

    if (size <= 0)
    {
        std::cout << "Invalid size\n";
    }
    else
    {
        Matrix_class ob1(size, size);
        std::cout << "Before Swap\n";
        ob1.initializeMatrix();
        ob1.printMatrix();
        std::cout << "Swapping colums\n";
        ob1.changeColumns(0, 2);
        ob1.printMatrix();
        std::cout << "Swapping rows\n";
        ob1.changeRows(0, 2);
        ob1.printMatrix();
    }

    return 0;
}

