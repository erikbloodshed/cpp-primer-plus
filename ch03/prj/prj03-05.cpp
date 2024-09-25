#include <iostream>

int main()
{
    std::cout << "Enter the world's population: ";
    long long worldPopulation;
    std::cin >> worldPopulation;    // 8'119'566'060

    std::cout << "Enter the population of the Philippines: ";
    long long philPopulation;
    std::cin >> philPopulation;     // 119'122'845

    double percent {static_cast<double>(philPopulation) / worldPopulation * 100.0};

    std::cout << "The population of the Philippines is " << percent
              << "% of the world population.\n";

    return 0;
}
