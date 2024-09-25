#include <iostream>

int main()
{
    const int code = 66;
    int x = 66;
    char c1 {31325};
    char c2 {66};
    char c3 {code};
    char c4 = {x};
    x = 31325;
    char c5 = x;
    return 0;
}
