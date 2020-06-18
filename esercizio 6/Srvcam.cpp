//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "Srvcam.h"


Srvcam::Srvcam(std::string n, std::string r) : name(n), reason(r) {
}

void Srvcam::subscrube(Observer *c) {
    elements.push_back(c);
}

void Srvcam::unsubscribe(Observer *c) {
    elements.remove(c);
}

void Srvcam::workingon() {
    notify(new VideoStream(name, reason));
}

void Srvcam::notify(VideoStream * v) {
    for (auto iter : elements)
        iter->update(v);
}

Srvcam::~Srvcam() {

}
