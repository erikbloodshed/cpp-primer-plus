#include <iostream>

void Phrase1();
void Phrase2();

int main()
{
    Phrase1();
    Phrase1();
    Phrase2();
    Phrase2();
    return 0;
}

void Phrase1()
{
    std::cout << "Three blind mice\n";
}

void Phrase2()
{
    std::cout << "See how they run\n";
}
