#include <iostream>

int main()
{
    const int kHoursPerDay {24};
    const int kMinutesPerHour {60};
    const int kSecondsPerMinute {60};

    std::cout << "Enter the number of seconds: ";
    long long time_left;
    std::cin >> time_left;

    std::cout << time_left << " seconds = ";

    long long seconds {time_left % kSecondsPerMinute};
    time_left = time_left / kSecondsPerMinute;

    long long minutes {time_left % kMinutesPerHour};
    time_left = time_left / kMinutesPerHour;

    long long hours {time_left % kHoursPerDay};
    time_left = time_left / kHoursPerDay;

    long long days {time_left};

    std::cout << days << " days, "
              << hours << " hours, " << minutes << " minutes, "
              << seconds << " seconds\n";

    return 0;
}
