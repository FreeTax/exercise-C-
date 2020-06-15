#ifndef OBSERVER_OBSERVER_H
#define OBSERVER_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {}

    virtual void update();
    virtual void atach();
    virtual void detach();
};

#endif //OBSERVER_OBSERVER_H
