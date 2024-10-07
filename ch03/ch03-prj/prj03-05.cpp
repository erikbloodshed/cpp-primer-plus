#include <iostream>

int main()
{
    std::cout << "Enter the world's population: ";
    unsigned long world_population;
    std::cin >> world_population;
    std::cout << "Enter the population of the Philippines: ";
    unsigned long philippines_population;
    std::cin >> philippines_population;

    double percentage {philippines_population * 100.0 / world_population};

    std::cout << "The population of the Philippines is " << percentage
              << "% of the world population.\n";

    return 0;
}
