#include <iostream>

double getDouble() {
    std::cout << "Enter a double value: ";
    double z {};
    std::cin >> z;
    return z;
}

char getSymbol() {
    std::cout << "Enter +,-,*, or /: ";
    char a{};
    std::cin >> a;
    return a;
}

int main() {
    double x = {getDouble()};
    double y = {getDouble()};
    char symbol = {getSymbol()};
   
    if (symbol == '+')
        std::cout << x << " " << symbol << " " << y << " is " << x + y;
    else if (symbol == '-')
        std::cout << x << " " << symbol << " " << y << " is " << x - y;
    else if (symbol == '*')
        std::cout << x << " " << symbol << " " << y << " is " << x * y;
    else if (symbol == '/')
        std::cout << x << " " << symbol << " " << y << " is " << x / y;
    else
        std::cout << "Nothing";
    
    return 0;
}