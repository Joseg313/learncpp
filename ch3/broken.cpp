#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x {};
    std::cin >> x;
	return x;
}

void writeAnswer(int z)
{
	std::cout << "The sum is: " << z << '\n';
}

int main()
{
	int x { readNumber()};
	
    x = x + readNumber();
	writeAnswer(x);

	return 0;
}