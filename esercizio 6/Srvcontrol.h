//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESERCIZIO_6_SRVCONTROL_H
#define ESERCIZIO_6_SRVCONTROL_H

#include "Observer.h"
#include <list>



class Srvcontrol : public Observer {
public:
    Srvcontrol(int i, Subject *pCamera);

    void update(VideoStream *v);

    void play();
    void addCamera(Subject *pCamera);
    void removeCamera(Subject *pCamera);

    void atach();

    void detach();

private:
    std::list<VideoStream *> element;
    int maxnumber;


};


#endif //ESERCIZIO_6_SRVCONTROL_H
