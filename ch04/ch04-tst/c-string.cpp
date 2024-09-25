#include <iostream>
#include <cstring>

int main()
{
    char word1[8] {"hello "};
    char word2[8] {"world!"};
    strcat(word1, word2);
    std::cout << word1 << std::endl;
    return 0;
}
