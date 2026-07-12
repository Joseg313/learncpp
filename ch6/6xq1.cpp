#include <iostream>
#include <string>
// Write the function getQuantityPhrase() here
std::string_view getQuantityPhrase(int quant) {
    if (quant<0) {
        return "negative";
    } 
    if (quant==0) {
        return "no";
    } 
    if (quant == 1) {
        return "a single";
    }
    if (quant ==2 ) {
        return "a couple of";
    }
    if (quant ==3) {
        return "a few";
    }
    return "many";

}

// Write the function getApplesPluralized() here
std::string_view getApplesPluralized(int numApples){
    return (numApples == 1 ? "apple" : "apples");
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}