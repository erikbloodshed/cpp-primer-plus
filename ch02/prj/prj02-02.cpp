#include <iostream>

int main()
{
    double furlong {};

    std::cout << "Enter the distance in furlong: ";
    std::cin >> furlong;

    double yard {furlong * 220.0};

    std::cout << furlong << " furlongs is equal to "
              << yard << " yards.\n";

    return 0;
}
