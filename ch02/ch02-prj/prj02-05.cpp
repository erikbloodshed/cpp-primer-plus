#include <iostream>

double CelsiusToFahrenheit(double);

int main()
{
    double celsius {};

    std::cout << "Please enter a Celsius value: ";
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is "
              << CelsiusToFahrenheit(celsius)
              << " degrees Fahrenheit.\n";

    return 0;
}

double CelsiusToFahrenheit(double celsius)
{
    return celsius * 1.8 + 32.0;
}
