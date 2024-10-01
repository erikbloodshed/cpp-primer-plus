#include <iostream>

int main()
{
    const double kMinutesPerDegree {60};
    const double kSecondsPerMinute {60};

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

    const double kTotalDegrees = degrees
                               + minutes / kMinutesPerDegree
                               + seconds / (kMinutesPerDegree * kSecondsPerMinute);

    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
              << kTotalDegrees << " degrees\n";

    return 0;
}
