#include <iostream>

using ullong = unsigned long long;

ullong fib(const int& n, const ullong& a = 0, const ullong& b = 1)
{
    if (n <= 0) {
        return a;
    }

    return fib(n - 1, b, a + b);
}

int main()
{
    std::cout << fib(50) << std::endl;
    return 0;
}
