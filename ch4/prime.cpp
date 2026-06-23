#include <iostream>

void prime() {
    std::cout << "The digit is prime";
}

void notPrime() {
    std::cout << "The digit is not prime";
}

int main() {
    std::cout << "Enter a number 0 through 9 (inclusive) ";
    int x = {};
    std::cin >> x;
    if (x==2)
        prime();
    else if (x==3)
    {
        prime();
    }
    else if (x==5)
    {
        prime();
    }
    else if (x==7)
    {
        prime();
    }
    else 
        notPrime();
    
    
    
    return 0;
}