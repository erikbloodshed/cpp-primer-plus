#include <cstring>
#include <iostream>
#include <limits>

union data
{
    int i;
    char c[20];
};

int main()
{
    data d;
    strcpy(d.c, "hello");
    std::cout << d.c << std::endl;
    d.i = std::numeric_limits<int>::max();
    std::cout << d.i << std::endl;
    return 0;
}
