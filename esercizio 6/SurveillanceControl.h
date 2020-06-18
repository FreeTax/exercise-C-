//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESERCIZIO_6_SURVEILLANCECONTROL_H
#define ESERCIZIO_6_SURVEILLANCECONTROL_H

#include "Subject.h"
#include <list>


class SurveillanceControl : public Observer {
public:
    SurveillanceControl(int i, Subject *pCamera);

    void update(VideoStream *v);

    void play();

    void addCamera(Subject *pCamera);

    void removeCamera(Subject *pCamera);

    void atach();

    void detach();

private:
    std::list<VideoStream *> element;
    int maxnumber;
    Subject *s;


};


#endif //ESERCIZIO_6_SURVEILLANCECONTROL_H
