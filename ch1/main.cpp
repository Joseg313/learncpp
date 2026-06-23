#include <iostream>  // for std::cout and std::cin

// this function asks the user for three values and then prints values
int main()
{
    std::cout << "Enter three numbers: ";
    int v1{};
    int v2{};
    int v3{};
    std::cin >> v1 >> v2 >> v3;

    std::cout << "You entered " << v1 << ", "<< v2 << ", and " << v3 << ".\n"; 

    return 0;
}