//
// Created by Francesco Mazzola on 02/06/2020.
//

#include "Triangle.h"

Triangle::Triangle(int height, int width):Shape(height, width){ }
int Triangle::getArea() {
    return (width*height)/2;
}