#include <iostream>

int main()
{
    const int hoursPerDay {24};
    const int minutesPerHour {60};
    const int secondsPerMinute {60};

    std::cout << "Enter the number of seconds: ";
    long long timeLeft;
    std::cin >> timeLeft;

    std::cout << timeLeft << " seconds = ";

    long long seconds {timeLeft % secondsPerMinute};
    timeLeft = timeLeft / secondsPerMinute;
    long long minutes {timeLeft % minutesPerHour};
    timeLeft = timeLeft / minutesPerHour;
    long long hours {timeLeft % hoursPerDay};
    timeLeft = timeLeft / hoursPerDay;
    long long days = timeLeft;

    std::cout << days << " days, "
              << hours << " hours, " << minutes << " minutes, "
              << seconds << " seconds\n";

    return 0;
}
