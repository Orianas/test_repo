#include <iostream>
#include <string>

int main () {
    std::string color;
    
    std::cout << "What is your favorite color? ";
    std::cin >> color;

    std::cout << "That's great that your favorite color is " << color << "." << std::endl;

    return 0;
}