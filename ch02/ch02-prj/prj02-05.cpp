#include <iostream>

double celsius_to_fahr(double);

int main()
{
    double celsius;

    std::cout << "Please enter a Celsius value: ";
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is "
              << celsius_to_fahr(celsius)
              << " degrees Fahrenheit.\n";

    return 0;
}

double celsius_to_fahr(double celsius)
{
    return celsius * 1.8 + 32.0;
}
