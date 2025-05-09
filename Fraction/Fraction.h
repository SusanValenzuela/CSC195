#include <iostream>

namespace mathlib {

    template <typename T>
    class Fraction {
    private:
        T numerator;
        T denominator;


        // GCD implementation 
        T gcd(T a, T b) const {
            while (b != 0) {
                T temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

    public:
        // constructor
        Fraction(T num = 0, T den = 1) : numerator(num), denominator(den) {
            if (denominator == 0) throw std::invalid_argument("Denominator cannot be zero.");
        }

        // simplify the fraction
        void Simplify() {
            T gcd_value = gcd(numerator, denominator);
            numerator /= gcd_value;
            denominator /= gcd_value;
        }

        // convert to double
        double toDouble() const {
            return static_cast<double>(numerator) / denominator;
        }

        // equality operator (==)
        bool operator==(const Fraction<T>& other) const {
            return numerator * other.denominator == denominator * other.numerator;
        }

        // greater than operator (>)
        bool operator>(const Fraction<T>& other) const {
            return numerator * other.denominator > denominator * other.numerator;
        }

        // addition operator (+)
        Fraction<T> operator+(const Fraction<T>& other) const {
            T common_denominator = denominator * other.denominator;
            T new_numerator = numerator * other.denominator + other.numerator * denominator;
            return Fraction<T>(new_numerator, common_denominator);
        }

        // multiplication operator (*)
        Fraction<T> operator*(const Fraction<T>& other) const {
            T new_numerator = numerator * other.numerator;
            T new_denominator = denominator * other.denominator;
            return Fraction<T>(new_numerator, new_denominator);
        }

        // output stream operator (<<)
        friend std::ostream& operator<<(std::ostream& os, const Fraction<T>& frac) {
            os << frac.numerator << "/" << frac.denominator;
            return os;
        }

        //iInput stream operator (>>)
        friend std::istream& operator>>(std::istream& is, Fraction<T>& frac) {
            char slash;
            is >> frac.numerator >> slash >> frac.denominator;
            if (frac.denominator == 0) is.setstate(std::ios::failbit);
            return is;
        }
    };

} 
