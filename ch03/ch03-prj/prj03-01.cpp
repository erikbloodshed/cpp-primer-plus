#include <iostream>

int main()
{
    const int inches_per_foot {12};

    std::cout << "Enter your height in inches: _\b";
    int height_inches;
    std::cin >> height_inches;

    int feet {height_inches / inches_per_foot};
    int inches {height_inches % inches_per_foot};

    std::cout << "Height: "
              << feet << " feet "
              << inches << " inches\n";

    return 0;
}
