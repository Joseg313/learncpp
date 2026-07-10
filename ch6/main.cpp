// Write a program that asks the user to input an integer, and tells the user whether the number is even or odd.
// Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise.
// Use the remainder operator to test whether the integer parameter is even. Make sure isEven() works with both positive and negative numbers.

#include <iostream>

constexpr bool isEven(int x) {
    if (x%2 == 0)
    {
        return true;

    } else {
        return false;
    }
        

}

int main(){
    std::cout<<"Enter an integer: ";
    int z {};
    std::cin >> z;

    if (isEven(z)) {
        std::cout << z << " is even";
    } else {
        std::cout << z << " is odd";
    }

    return 0;
}
