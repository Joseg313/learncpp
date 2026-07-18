#include <iostream>
#include <string>



int main () {
    int smaller {};
    int larger {};

    std::cout << "Enter an integer: ";
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    std::cin >> larger;

    if (smaller > larger) 
    {
        std::cout << "Swapping the values" << std::endl;
        int temp {smaller};
        smaller = larger;
        larger = temp;

    } 


    
    std::cout << "The smaller value is " << smaller << std::endl;
    std::cout << "The larger value is " << larger<< std::endl;
    return 0;
}