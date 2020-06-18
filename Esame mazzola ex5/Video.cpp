//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "Video.h"

Video::Video(const std::string &n, const std::string &m, int h, int w, int t, int d) : Document(n, m, h, w, t) {
    duration=d;
}

void Video::play() {
    std::cout<<"i'm playing video"<<getName()<<std::endl;
    play();
}

int Video::getDuration() const {
    return duration;
}

void Video::setDuration(int duration) {
    Video::duration = duration;
}

Video::~Video() {

}
