#include <iostream>

int main()
{
    const int kInchesPerFoot {12};

    std::cout << "Enter your height in inches: _\b";
    int height_inches;
    std::cin >> height_inches;

    int feet {height_inches / kInchesPerFoot};
    int inches {height_inches % kInchesPerFoot};

    std::cout << "Height: "
              << feet << " feet "
              << inches << " inches\n";

    return 0;
}
