#ifndef OBSERVER_SUBJECT_H
#define OBSERVER_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual void subscribe(Observer * o)  ;
    virtual void unsubscri(Observer * o) ;
    virtual void noitfy() ;

};

#endif //OBSERVER_2_SUBJECT_H
