#include <format>
#include <iostream>

int main()
{
    char msg[2] = {'h', '\0'};

    for (auto c : msg) {
        int k = c;
        std::cout << std::format("{} : {}\n", c, k);
    }
    return 0;
}
