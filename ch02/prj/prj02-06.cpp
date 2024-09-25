#include <iostream>

double LightYearToAstroUnit(double);

int main()
{
    std::cout << "Enter the number of light years: ";
    double lightYear;
    std::cin >> lightYear;

    std::cout << lightYear << " light years = "
              << LightYearToAstroUnit(lightYear)
              << " astronomical units\n";

    return 0;
}

double LightYearToAstroUnit(double lightYear)
{
    return lightYear * 63'240.0;
}
