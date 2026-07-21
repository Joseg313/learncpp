
// Write a program that asks the user to enter two integers, one named smaller, the other named larger. 
// If the user enters a smaller value for the second integer, use a block and a temporary variable to 
// swap the smaller and larger values. Then print the values of the smaller and larger variables. 
// Add comments to your code indicating where each variable dies. Note: When you print the values, 
// smaller should hold the smaller input and larger the larger input, 
// no matter which order they were entered in.




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
        // temp dies
    } 



    
    std::cout << "The smaller value is " << smaller << std::endl;
    std::cout << "The larger value is " << larger<< std::endl;
    return 0;
    // smaller and larger die
}