#include <iostream>

int main()
{
    const double kInchesPerFoot {12};
    const double kMetersPerInch {0.0254};
    const double kPoundToKilograms {1/2.2};

    std::cout << "Enter your height in feet and inches: ";
    double feet, inches;
    std::cin >> feet >> inches;

    std::cout << "Enter your weight in pounds: ";
    double pounds;
    std::cin >> pounds;

    double totalInches {inches + feet * kInchesPerFoot};
    double heightInMeters {totalInches * kMetersPerInch};
    double weightInKilograms {pounds * kPoundToKilograms};
    double bmi {weightInKilograms / (heightInMeters * heightInMeters)};

    std::cout << "Your BMI: " << bmi << std::endl;
    return 0;
}
