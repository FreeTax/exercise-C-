//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESERCIZIO_6_SRVCAM_H
#define ESERCIZIO_6_SRVCAM_H


#include "Subject.h"
#include <list>


class Srvcam : public Subject{
public:
    Srvcam(std::string n, std:: string r);

    void unsubscribe(Observer *c) override;

    void subscrube(Observer *c) override;

    void workingon();

    void notify(VideoStream *v) override;

    ~Srvcam();

private:
    std::string name;
    std::string reason;
    std::list<Observer *> elements;
};


#endif //ESERCIZIO_6_SRVCAM_H
