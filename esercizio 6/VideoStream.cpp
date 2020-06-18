//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "VideoStream.h"

void VideoStream::play() {
    std::cout << "i'm videostream of camera: " << name << ". i was attivated from " << type << std::endl;
}

VideoStream::VideoStream(std::string nome, std::string t) : name(nome), type(t) {

}
