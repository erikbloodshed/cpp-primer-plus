#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main()
{
    // use textual representation for bool
    cout << boolalpha;

    // print maximum of integeral types
    cout << "max(short)            : "
         << numeric_limits<short>::max() << "\n"
         << "max(int)              : "
         << numeric_limits<int>::max() << "\n"
         << "max(long)             : "
         << numeric_limits<long>::max() << "\n\n";

    // print maximum floating-point types
    cout << "max(float)            : "
         << numeric_limits<float>::max() << "\n"
         << "max(double)           : "
         << numeric_limits<double>::max() << "\n"
         << "max(long double)      : "
         << numeric_limits<long double>::max() << "\n\n";

    // print whether char is signed
    cout << "is_signed(char)       : "
         << numeric_limits<char>::is_signed << "\n";

    // print whether limits for type string exist
    cout << "is_specialized(string): "
         << numeric_limits<string>::is_specialized
         << endl;
}
