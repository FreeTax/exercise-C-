//
// Created by Francesco Mazzola on 02/06/2020.
//

#ifndef OOP_RECTANGULAR_H
#define OOP_RECTANGULAR_H


#include "Shape.h"

class Rectangular : public Shape {
public:

    Rectangular(int height, int width);

    int getArea();
};


#endif //OOP_RECTANGULAR_H
