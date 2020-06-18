//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESERCIZIO_6_SUBJECT_H
#define ESERCIZIO_6_SUBJECT_H
#include "Observer.h"
#include "VideoStream.h"


class Subject {
public:
    virtual void notify(VideoStream *v)=0;

    virtual void subscrube(Observer *c)=0;

    virtual void unsubscribe(Observer *c)=0;

    virtual ~Subject()=default;
};


#endif //ESERCIZIO_6_SUBJECT_H
