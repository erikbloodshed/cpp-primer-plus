#include <iostream>

int main()
{
    std::cout << "How many miles have you driven: ";
    double miles;
    std::cin >> miles;

    std::cout << "How many gallons of gasoline have you used: ";
    double gallons;
    std::cin >> gallons;

    std::cout << "Your car has gotten " << miles / gallons << " miles per gallon.\n";

    return 0;
}
