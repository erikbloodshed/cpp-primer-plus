#include <iostream>

int main()
{
    char ch = 'e';
    int i = ch;
    std::cout << "character: " << ch << ", value: " << i << '\n';
    i = 65;
    ch = i;
    std::cout << "character: " << ch << ", value: " << i << '\n';
    std::cout << "\a";
    return 0;
}
