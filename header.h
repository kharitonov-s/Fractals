#ifndef HEADER_H
#define HEADER_H

#endif // HEADER_H
#include <iostream>
#include <exception>
#include <cmath>

using namespace std;

class Complex
{
public:
    double re;
    double im;
    Complex(double r = 0, double i = 0) : re(r), im(i) {}

    Complex operator+(const Complex&v)
    {
        return Complex(re + v.re, im + v.re);
    }

    Complex operator^(const Complex &v)
    {
        return Complex(v.re*v.re - v.im*v.im, 2 * v.re*v.im);
    }


};
double abs(const Complex v)
{
    return sqrt(v.re*v.re + v.im*v.im);
}
Complex sqr(const Complex v)
{
    return Complex(v.re*v.re - v.im*v.im, 2 * v.re*v.im);
}

