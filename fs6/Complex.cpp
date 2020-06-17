//
// Created by Francesco Mazzola on 17/06/2020.
//

#include "Complex.h"

double Complex::getRe() const {
    return re;
}

void Complex::setRe(double re) {
    Complex::re = re;
}

double Complex::getIm() const {
    return im;
}

void Complex::setIm(double im) {
    Complex::im = im;
}

bool operator==(Complex &c1, Complex &c2) {
    if (c1.getIm() == c2.getIm() && c1.getRe() == c1.getRe())
        return true;
    else
        return false;
}

Complex *operator+(Complex &c1, Complex &c2) {
    double im = c1.getIm() + c2.getIm();
    double re = c1.getRe() + c2.getRe();
    return new Complex(re, im);
}

Complex::Complex(double re, double im) {
    setIm(im);
    setRe(re);
}

Complex *operator-(Complex c1, Complex c2) {
    double im = c1.getIm() - c2.getIm();
    double re = c1.getRe() - c2.getRe();
    return new Complex(re, im);
}

