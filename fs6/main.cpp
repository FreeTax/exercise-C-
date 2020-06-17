#include <iostream>
#include "Complex.h"

int main() {
    std::unique_ptr<Complex> c1(new Complex(10.0, 20.0));
    std::unique_ptr<Complex> c2(new Complex(5, 4));
    bool p = c1 == c2;
    std::cout << p << std::endl;
    std::unique_ptr<Complex> c3(new Complex());
    c3.reset((*c1 + *c2));
    std::cout << c3->getRe() << " " << c3->getIm() << std::endl;


}
