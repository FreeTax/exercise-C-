//
// Created by Francesco Mazzola on 18/06/2020.
//
#include <iostream>
#include "ImageElement.h"


ImageElement::ImageElement(std::string f) : fileName(f)  {
    height = 128;
    width = 128;
}

void ImageElement::draw() {
    std::cout << "i'm pronting an image " << fileName << "on position" << getPosX() << getPosY() << std::endl;
}

const std::string &ImageElement::getFileName() const {
    return fileName;
}

void ImageElement::setFileName(const std::string &fileName) {
    ImageElement::fileName = fileName;
}

int ImageElement::getWidth() const {
    return width;
}

void ImageElement::setWidth(int width) {
    ImageElement::width = width;
}

void ImageElement::setHeight(int height) {
    ImageElement::height = height;
}

int ImageElement::getHeight() const {
    return height;
}
