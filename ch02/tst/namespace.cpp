#include <iostream>

namespace Eric
{
    void message()
    {
        std::cout << "Message from Eric.\n";
    }
}  // namespace Eric

namespace Jonalyn
{
    void message()
    {
        std::cout << "Message from Jonalyn.\n";
    }
}  // namespace Jonalyn

int main()
{
    Eric::message();
    Jonalyn::message();
    return 0;
}
