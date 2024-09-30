#include <iostream>
int cube(int);

int main()
{
    using namespace std;
    cout << "Enter a number: ";
    int number;
    cin >> number;
    cout << number << "^3 = "
         << cube(number) << endl;
    return 0;
}

int cube(int x)
{
    return x * x * x;
}
