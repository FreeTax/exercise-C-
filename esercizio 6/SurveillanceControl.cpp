//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "SurveillanceControl.h"

SurveillanceControl::SurveillanceControl(int i, Subject *pCamera) : maxnumber(i), s(pCamera) {
    atach();

}

void SurveillanceControl::update(VideoStream *v) {
    element.push_front(v);
    if (element.size() > maxnumber) {
        std::list<VideoStream *>::iterator iter;
        iter = prev(element.end());
        element.erase(iter);
    }
    play();
}


void SurveillanceControl::play() {
    for (auto iter:element)
        iter->play();
    std::cout << "" << std::endl;
}

void SurveillanceControl::atach() {
    s->subscrube(this);
}

void SurveillanceControl::detach() {
    s->unsubscribe(this);
}

void SurveillanceControl::removeCamera(Subject *pCamera) {
    s = pCamera;
    detach();

}

void SurveillanceControl::addCamera(Subject *pCamera) {
    s = pCamera;
    atach();
}


