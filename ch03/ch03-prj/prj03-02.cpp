#include <iostream>

int main()
{
    const double incher_per_foot {12.0};
    const double meters_per_inch {0.0254};
    const double kilograms_per_pound {0.4536};

    std::cout << "Enter your height in feet and inches: ";
    double feet, inches;
    std::cin >> feet >> inches;

    std::cout << "Enter your weight in pounds: ";
    double pounds;
    std::cin >> pounds;

    double total_inches {inches + feet * incher_per_foot};
    double height_meters {total_inches * meters_per_inch};
    double weight_kilograms {pounds * kilograms_per_pound};
    double body_mass_index {weight_kilograms / (height_meters * height_meters)};

    std::cout << "Your BMI: " << body_mass_index << std::endl;
    return 0;
}
