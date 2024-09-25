#include <iostream>

int main()
{
    const int kInchesInFeet {12};

    std::cout << "Enter your height in inches: _\b";
    int heigthInInches;
    std::cin >> heigthInInches;

    int feet {heigthInInches / kInchesInFeet};
    int inches {heigthInInches % kInchesInFeet};

    std::cout << "Height: "
              << feet << " feet "
              << inches << " inches\n";

    return 0;
}
