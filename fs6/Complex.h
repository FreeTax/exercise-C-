//
// Created by Francesco Mazzola on 17/06/2020.
//

#ifndef FS6_COMPLEX_H
#define FS6_COMPLEX_H


class Complex {
public:
    Complex(double re = 0, double im = 0);

    friend Complex *operator+(Complex &c1, Complex &c2);

    friend Complex *operator-(Complex c1, Complex c2);

    friend bool operator==(Complex &c1, Complex &c2);

    double getRe() const;

    void setRe(double re);

    double getIm() const;

    void setIm(double im);

private:
    double re;
    double im;
};


#endif //FS6_COMPLEX_H
