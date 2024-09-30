#include <iomanip>
#include <iostream>

void display_time(int, int);

int main()
{
    std::cout << "Enter the number of hours: ";
    int hour;
    std::cin >> hour;

    std::cout << "Enter the number of minutes: ";
    int minute;
    std::cin >> minute;

    display_time(hour, minute);
    return 0;
}

void display_time(int h, int m)
{
    std::cout << "Time: " << std::setfill('0') << std::setw(2) << h << ":"
              << std::setfill('0') << std::setw(2) << m << std::endl;
}
