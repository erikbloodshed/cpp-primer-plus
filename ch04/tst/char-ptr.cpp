#include <iostream>
#include <cstring>
#include <string>

int main()
{
    const char* msg = "hello, world";
    std::cout << msg << "\n";
    std::cout << strlen(msg) << "\n";

    const std::string msg2 = "hello, world";
    std::cout << msg2 << "\n";
    std::cout << msg2.length() << "\n";
    return 0;
}
