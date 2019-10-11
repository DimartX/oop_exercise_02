#include "Complex.hpp"
#include <iostream>
#include <iomanip>

Complex operator+ (Complex const& left, Complex const& right) {
    return Complex(left.re + right.re, left.im + right.im);
}

Complex operator- (Complex const& left, Complex const& right) {
    return Complex(left.re - right.re, left.im - right.im);
}

Complex operator* (Complex const& left, Complex const& right) {
    return Complex(left.re * right.re - left.im * right.im,
                   left.re * right.im + left.im * right.re);
}

Complex operator/ (Complex const& left, Complex const& right) {    
    double den = (right.re * right.re + right.im * right.im);            
    return Complex(
                   (left.re * right.re + left.im * right.im) / den,
                   (left.im * right.re - left.re * right.im) / den
                   );
}

bool operator== (Complex const& left, Complex const& right) {
    return (left.re - right.re) < 0.001 && (left.im - right.im) < 0.001;
}

bool operator!= (Complex const& left, Complex const& right) {
    return !(left == right);
}

double abs(Complex const& other) {
    return sqrt(other.re * other.re + other.im * other.im);
}

Complex conj(Complex const& other) {
    return Complex(other.re, -other.im);
}

int cmp(Complex const& left, Complex const& right) {
    return (abs(left) > abs(right)) ? 1
        : (abs(left) == abs(right)) ? 0
        : -1;
}

std::ostream& operator<< (std::ostream& out, Complex const& other) {
    out << std::fixed << std::setprecision(3) << other.re << ' ' << other.im;
    return out;
}

std::istream& operator>> (std::istream& in, Complex& other) {
    in >> other.re >> other.im;
    return in;
}

Complex operator"" _im(long double right) {
    return Complex(0, double(right));
}

Complex operator"" _re(long double left) {
    return Complex(double(left), 0);
}

Complex operator"" _im(unsigned long long right) {
    return Complex(0, double(right));
}

Complex operator"" _re(unsigned long long left) {
    return Complex(double(left), 0);
}
