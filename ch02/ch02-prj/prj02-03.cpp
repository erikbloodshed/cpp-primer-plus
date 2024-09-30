#include <iostream>

void phrase1();
void phrase2();

int main()
{
    phrase1();
    phrase1();
    phrase2();
    phrase2();
    return 0;
}

void phrase1()
{
    std::cout << "Three blind mice\n";
}

void phrase2()
{
    std::cout << "See how they run\n";
}
