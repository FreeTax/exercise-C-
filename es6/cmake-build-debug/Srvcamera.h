//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESERCIZIO_6_SRVCAMERA_H
#define ESERCIZIO_6_SRVCAMERA_H

#include "Srvcontrol.h"
#include <iostream>
#include <list>


class Srvcamera {
public:
    Srvcamera(std::string n);

    void unsubscribe(Srvcontrol *c);

    void subscrube(Srvcontrol *c);

    void workingon();

    void notify(VideoStream *v);

private:
    std::string name;
    std::list<Srvcontrol *> elements;
};


#endif //ESERCIZIO_6_SRVCAMERA_H
