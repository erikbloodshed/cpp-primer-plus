#include <iostream>

double lightyear_to_astrounit(double);

int main()
{
    std::cout << "Enter the number of light years: ";
    double lightyear;
    std::cin >> lightyear;

    std::cout << lightyear << " light years = "
              << lightyear_to_astrounit(lightyear)
              << " astronomical units.\n";

    return 0;
}

double lightyear_to_astrounit(double ly)
{
    return ly * 63240.0;
}
