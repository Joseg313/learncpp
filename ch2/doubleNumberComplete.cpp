#include <iostream>

int doubleNumber (int x)
{
    return 2*x;
}

int main() 
{ 
    std::cout << "input an integer ";
    int x{};
    std::cin >> x;
    std::cout << doubleNumber(x);

    return 0;
}