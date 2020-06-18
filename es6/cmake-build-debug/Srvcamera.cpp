//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "Srvcamera.h"


Srvcamera::Srvcamera(std::string n) : name(n) {
}

void Srvcamera::subscrube(Srvcontrol *c) {
    elements.push_back(c);
}

void Srvcamera::unsubscribe(Srvcontrol *c) {
    elements.remove(c);
}

void Srvcamera::workingon() {
    notify(new VideoStream("camera 1", "killer"));
}

void Srvcamera::notify(VideoStream *v) {
    for (auto iter : elements)
        iter->update(v);
}
