#include <iostream>

enum spectrum
{
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    indigo,
    ultraviolet
};

int main()
{
    spectrum band;
    band = red;
    std::cout << band << "\n";
    return 0;
}
