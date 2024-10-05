#include <iostream>

int main()
{
    char ch = 'e';
    int i = ch;
    std::cout << "character: " << ch << ", value: " << i << '\n';
    ch = ch + 1;
    i = ch;
    std::cout << "character: " << ch << ", value: " << i << '\n';
    return 0;
}
