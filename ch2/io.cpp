#include "io.h"
#include <iostream>
int readNumber() 
{
    std::cout << "Input an integer: ";
    int x {};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "the sum of your numbers is: " << x;
}
