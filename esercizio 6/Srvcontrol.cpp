//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "Srvcontrol.h"

Srvcontrol::Srvcontrol(int i, Subject *pCamera) : maxnumber(i) {
    atach(pCamera);

}

void Srvcontrol::update(VideoStream *v) {
    element.push_front(v);
    if (element.size() >= maxnumber) {
        std::list<VideoStream *>::iterator iter;
        iter = prev(element.end());
        element.erase(iter);
    }
    play();
}


void Srvcontrol::play() {
    for (auto iter:element)
        iter->play();
    std::cout<<""<<std::endl;
}

void Srvcontrol::atach() {
    pCam->subscrube(this);
}

void Srvcontrol::detach() {
    pCam->unsubscribe(this);
}

void Srvcontrol::removeCamera(Subject *pCamera) {

}

void Srvcontrol::addCamera(Subject *pCamera) {

}


