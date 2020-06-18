//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESERCIZIO_6_OBSERVER_H
#define ESERCIZIO_6_OBSERVER_H

#include "VideoStream.h"


class Observer {
public:
    virtual void atach() = 0;

    virtual void detach() = 0;

    virtual void update(VideoStream *v) = 0;

    virtual ~Observer() = default;
};


#endif //ESERCIZIO_6_OBSERVER_H
