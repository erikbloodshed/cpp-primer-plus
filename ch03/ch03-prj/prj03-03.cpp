#include <iostream>

int main()
{
    const double kMinPerDeg {60};
    const double kSecPerMin {60};

    std::cout << "Enter a latitude in degrees, minutes, and seconds:\n"
              << "First, enter the degrees: ";
    double degrees;
    std::cin >> degrees;

    std::cout << "Next, enter the minutes of arc: ";
    double minutes;
    std::cin >> minutes;

    std::cout << "Finally, enter the seconds of arc: ";
    double seconds;
    std::cin >> seconds;

    const double totalDegrees {degrees + minutes / kMinPerDeg + seconds / (kMinPerDeg * kSecPerMin)};

    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
              << totalDegrees << " degrees\n";

    return 0;
}
