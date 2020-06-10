//
// Created by Francesco Mazzola on 02/06/2020.
//

#include "Rectangular.h"

Rectangular::Rectangular( int height, int width) : Shape(height, width) {

}

int Rectangular::getArea() {
    return height*width;
}