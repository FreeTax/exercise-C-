//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "Srvcontrol.h"

Srvcontrol::Srvcontrol(int i, Srvcamera *pCamera) : maxnumber(i), c(pCamera) {

}

void Srvcontrol::update(VideoStream *v) {
    element.push_front(v);
    if (element.size() >= maxnumber) {
        std::list<VideoStream *>::iterator iter;
        iter = prev(element.end());
        element.erase(iter);
    }
}


void Srvcontrol::play() {
    for (auto iter:element)
        iter->play();
}

void Srvcontrol::atach() {
    c->subscrube(this);
}

void Srvcontrol::detach() {
    c->unsubscribe(this);
}


