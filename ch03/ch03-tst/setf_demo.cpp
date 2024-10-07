#include <iomanip>
#include <iostream>
#include <cmath>

int main()
{
    const int KWidth {15};

    std::cout.setf(std::ios::right);
    std::cout << std::setw(KWidth / 2) << "radius"
        << std::setw(KWidth) << "circumference" << '\n';

    std::cout.setf(std::ios::fixed);
    for (double radius = 1; radius <= 6; radius += 0.5) {
        std::cout << std::setprecision(1) << std::setw(KWidth / 2)
            << radius
            << std::setprecision(2) << std::setw(KWidth)
            << (2 * M_PI * radius) << '\n';
    }

    return 0;
}
