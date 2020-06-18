//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "Image.h"

Image::Image(std::string n, std::string m, int h, int w, int t) : Document(n, m, h, w, t) {

}

void Image::play() {
    std::cout<<"i'm printing an image called: "<<getName()<<std::endl;
    playmusic();
}

Image::~Image() {

}
