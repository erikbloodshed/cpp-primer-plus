#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age in months: " << age * 12 << ".\n";

    return 0;
}
