//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "SurveillanceCamera.h"


SurveillanceCamera::SurveillanceCamera(std::string n, std::string r) : name(n), reason(r) {
}

void SurveillanceCamera::subscrube(Observer *c) {
    elements.push_back(c);
}

void SurveillanceCamera::unsubscribe(Observer *c) {
    elements.remove(c);
}

void SurveillanceCamera::workingon() {
    notify(new VideoStream(name, reason));
}

void SurveillanceCamera::notify(VideoStream *v) {
    for (auto iter : elements)
        iter->update(v);
}

SurveillanceCamera::~SurveillanceCamera() {

}
