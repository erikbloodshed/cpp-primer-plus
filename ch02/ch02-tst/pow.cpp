#include <iostream>

double pow(const double&, const int&);

int main()
{
    std::cout << pow(0.5, 1) << '\n';
    return 0;
}

double pow(const double& x, const int& y)
{
    double product {1};

    for (int i {0}; i < y; i++) {
        product *= x;
    }

    return product;
}
