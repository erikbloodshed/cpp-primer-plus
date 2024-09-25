#include <iostream>
#include <limits>
#include <climits>

int main()
{
    std::cout << "Maximum char: " << (int) std::numeric_limits<char>::max() << '\n';
    std::cout << "Minimum char: " << (int) std::numeric_limits<char>::min() << '\n';
    std::cout << "Maximum char: " << (int) CHAR_MAX << '\n';
    std::cout << "Minimum char: " << (int) CHAR_MIN << '\n';
    return 0;
}
