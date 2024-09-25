#include <iostream>

int main()
{
    using namespace std;
    long long_val {2111222333};
    float float_val {static_cast<float>(long_val)};
    cout << std::fixed << float_val << endl;
    return 0;
}
