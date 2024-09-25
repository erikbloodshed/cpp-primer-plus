#include <iostream>

int main()
{
    const int plifs[] = {25, 92, 3};
    for (const auto& i : plifs) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
