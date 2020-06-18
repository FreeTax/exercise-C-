//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESERCIZIO_6_SRVCONTROL_H
#define ESERCIZIO_6_SRVCONTROL_H

#include "Srvcamera.h"
#include <iostream>
#include <list>
#include "VideoStream.h"


class Srvcontrol {
public:
    Srvcontrol(int i, Srvcamera *pCamera);

    void update(VideoStream *v);

    void play();

    void atach();

    void detach();

private:
    std::list<VideoStream *> element;
    int maxnumber;
    Srvcamera *c;
};


#endif //ESERCIZIO_6_SRVCONTROL_H
