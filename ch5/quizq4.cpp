// Write a program that asks for the name and age of two people, then prints which person is older.
// sample output:
// 
// Enter the name of person #1: John Bacon
// Enter the age of John Bacon: 37
// Enter the name of person #2: David Jenkins
// Enter the age of David Jenkins: 44
// David Jenkins (age 44) is older than John Bacon (age 37).

#include <iostream>
#include <string>

int get_age (std::string_view name) {
    int age {};
    std::cout << "Enter the age of " << name << ": ";
    std::cin >> age;
    return age;
}

void print_older (std::string_view name1, int age1, std::string_view name2, int age2) {
    
    if (age1>age2){
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
    } else {
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").\n";
    }
}

int main() {
    std::string name1 {};
    std::string name2 {};
    int age1 {};
    int age2 {};

    std::cout << "Enter the name of person #1: ";
    std::getline(std::cin >> std::ws,name1);
    age1 = get_age(name1);
    
    std::cout << "Enter the name of person #2: ";
    std::getline(std::cin >> std::ws,name2);
    age2 = get_age(name2);


    print_older(name1, age1, name2, age2);
    return 0;
}