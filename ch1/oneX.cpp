#include <iostream>
// write program that asks user to enter a num and then a second num. program should tell user what the result of adding and subtracting nums is
int main () {
    int firstInt{};
    int secondInt{};

    std::cout << "Enter an Integer: ";
    std::cin >> firstInt;
    
    std::cout << "Enter another integer: ";
    std::cin >> secondInt;

    std::cout << firstInt << " + " << secondInt << " is " << firstInt + secondInt << ".\n";
    std::cout << firstInt << " - " << secondInt << " is " << firstInt - secondInt << ".\n";
    
    
    
    return 0;
}