// limits.cpp -- some integer limits
#include <climits>             // use limits.h for older systems
#include <iostream>
#include <limits>

int main()
{
    using namespace std;
    int n_int = std::numeric_limits<int>::max();       // initialize n_int to max int value
    short n_short = std::numeric_limits<short>::max();  // symbols defined in climits file
    long n_long = std::numeric_limits<long>::max();
    long long n_llong = std::numeric_limits<long long>::max();

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short  << " bytes." << endl;
    cout << "long is " << sizeof(long) << " bytes." << endl;
    cout << "long long is " << sizeof n_llong  << " bytes." << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;
    cout << endl;

    cout << "Minimum int value = " << std::numeric_limits<int>::min() << endl;
    cout << "Bits per byte = " << std::numeric_limits<char>::digits + 1 << endl;

    return 0;
}
