#include <iostream>

int main()
{
    const double minutes_per_degree {60};
    const double seconds_per_minute {60};

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

    double total_degrees = degrees
                         + minutes / minutes_per_degree
                         + seconds / (minutes_per_degree * seconds_per_minute);

    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
              << total_degrees << " degrees\n";

    return 0;
}
