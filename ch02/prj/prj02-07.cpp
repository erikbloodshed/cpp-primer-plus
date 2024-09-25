#include <iomanip>
#include <iostream>

void PrintTime(int, int);

int main()
{
    std::cout << "Enter the number of hours: ";
    int hour;
    std::cin >> hour;

    std::cout << "Enter the number of minutes: ";
    int minute;
    std::cin >> minute;

    PrintTime(hour, minute);

    return 0;
}

void PrintTime(int h, int m)
{
    std::cout << "Time: " << std::setfill('0') << std::setw(2) << h << ":"
              << std::setfill('0') << std::setw(2) << m << std::endl;
}
