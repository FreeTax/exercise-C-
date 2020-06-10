//
// Created by Francesco Mazzola on 02/06/2020.
//

#ifndef OOP_TRIANGLE_H
#define OOP_TRIANGLE_H
#include "Shape.h"


class Triangle : public Shape {
public:
    Triangle(int height, int width);
    int getArea();
};


#endif //OOP_TRIANGLE_H
