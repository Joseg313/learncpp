// write a program that asks the user to input
// a number between 0 and 255. Print this number as an 8-bit
// binary number of the form #### ####
// Don't use any bitwise operators. Don't use std::bitset

#include <iostream>
#include <string>
void binaryRemainder (int decimal, int bit) {
    ((decimal / bit) %2) == 0 ? (std::cout << '0') : (std::cout << '1'); 
}


int main() {
    std::cout<< "Enter a number between 0 and 255: ";
    int userInt {};
    std::cin >> userInt;     
    
    binaryRemainder(userInt, 128);
    binaryRemainder(userInt, 64);
    binaryRemainder(userInt, 32);
    binaryRemainder(userInt, 16);
    std::cout<< ' ';
    binaryRemainder(userInt, 8);
    binaryRemainder(userInt, 4);
    binaryRemainder(userInt, 2);
    binaryRemainder(userInt, 1);
    
    
    return 0;
}