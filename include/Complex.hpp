#pragma once

#include <iostream>
#include <cmath>

class Complex{
public:
    Complex() = default;

    Complex(double re, double im) noexcept
        : re(re)
        , im(im)
    {}

    Complex(Complex const& other) noexcept
        : re(other.re)
        , im(other.im)
    {}

    ~Complex() {};

    friend Complex operator+ (Complex const& left, Complex const& right);
    friend Complex operator- (Complex const& left, Complex const& right);
    friend Complex operator* (Complex const& left, Complex const& right);
    friend Complex operator/ (Complex const& left, Complex const& right);
    friend bool operator== (Complex const& left, Complex const& right);
    friend bool operator!= (Complex const& left, Complex const& right);

    friend Complex conj(Complex const& other);
    friend double abs(Complex const& other);    
    friend int cmp(Complex const& left, Complex const& right);

    friend std::ostream& operator<< (std::ostream& out, Complex const& other);
    friend std::istream& operator>> (std::istream& in, Complex& other);

    Complex& operator- () {
        (*this) = Complex(-re, -im);
        return *this;
    }

    Complex& operator+ () {
        (*this) = Complex(re, im);
        return *this;
    }
private:
    double re;
    double im;
};

Complex operator"" _im(long double right);
Complex operator"" _re(long double left);
Complex operator"" _im(unsigned long long right);
Complex operator"" _re(unsigned long long left);
