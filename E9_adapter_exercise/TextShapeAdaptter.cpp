//
// Created by Francesco Mazzola on 14/06/2020.
//
#include <iostream>
#include "TextShapeAdaptter.h"



void TextShapeAdaptter::draw() {
    std::cout<<"draw text!"<<std::endl;
    std::cout<<"text ->"<<getText()<<" size->"<<getFontSize()<<std::endl;
}

void TextShapeAdaptter::resize(float newSize) {
    Text::resize(static_cast<int>(newSize));
}