#include <iostream>
#include <limits>

int main()
{
    int x = std::numeric_limits<int>::min();
    int y = std::numeric_limits<int>::max();
    std::cout << x - 1 << std::endl;
    std::cout << y << std::endl;
    return 0;
}
