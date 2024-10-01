#include <iostream>

int main()
{
    const double kInchesPerFoot {12.0};
    const double kMetersPerInch {0.0254};
    const double kPoundToKilograms {0.4536};

    std::cout << "Enter your height in feet and inches: ";
    double feet, inches;
    std::cin >> feet >> inches;

    std::cout << "Enter your weight in pounds: ";
    double pounds;
    std::cin >> pounds;

    double total_inches {inches + feet * kInchesPerFoot};
    double height_meters {total_inches * kMetersPerInch};
    double weight_kilograms {pounds * kPoundToKilograms};
    double body_mass_index {weight_kilograms / (height_meters * height_meters)};

    std::cout << "Your BMI: " << body_mass_index << std::endl;
    return 0;
}
