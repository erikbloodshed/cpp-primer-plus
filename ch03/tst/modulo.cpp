#include <iostream>

int main()
{
    int a {4}, b {-2};
    bool c {(a / b) * b + a % b == a};

    std::cout << "Value of c = " << a << '\n';
    std::cout << std::boolalpha << c << '\n';
    return 0;
}
