#include <iostream>
#include "Fraction.h"

int main() {
    mathlib::Fraction<int> fraction3;
    std::cout << "Enter a fraction (format: numerator/denominator): ";
    std::cin >> fraction3;

    mathlib::Fraction<int> fraction2{ 15, 6 };
    fraction2.Simplify();

    std::cout << "You entered: " << fraction3 << std::endl;
    std::cout << "Second test fraction: " << fraction2 << std::endl;

    std::cout << fraction3 << " == " << fraction2 << " result: " << (fraction3 == fraction2) << std::endl;

    std::cout << fraction3 << " > " << fraction2 << " result: " << (fraction3 > fraction2) << std::endl;

    std::cout << fraction3 << " + " << fraction2 << " result: " << (fraction3 + fraction2) << std::endl;

    std::cout << fraction3 << " * " << fraction2 << " result: " << (fraction3 * fraction2) << std::endl;

    std::cout << "Decimal value of your input: " << fraction3.toDouble() << std::endl;

    return 0;
}
