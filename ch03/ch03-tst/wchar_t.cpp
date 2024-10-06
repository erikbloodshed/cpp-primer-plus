#include <iostream>

int main()
{
    wchar_t bob = L'P';
    auto ana = L'A';

    std::wcout << bob << std::endl;
    std::wcout << L"tall" << std::endl;
    std::wcout << sizeof(ana) << std::endl;
    std::wcout << ana << std::endl;
    return 0;
}
