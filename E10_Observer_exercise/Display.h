#ifndef OBSERVER_2_DISPLAY_H
#define OBSERVER_2_DISPLAY_H

class Display {
public:
    virtual ~Display() {}

    virtual void draw() = 0;
};

#endif //OBSERVER_2_DISPLAY_H
