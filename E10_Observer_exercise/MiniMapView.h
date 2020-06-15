#ifndef OBSERVER_MINIMAPVIEW_H
#define OBSERVER_MINIMAPVIEW_H

#include "Observer.h"
#include "Display.h"
#include <iostream>
#include "GameCharacter.h"

// TODO change as needed
class MiniMapView : public Display {
public:
    MiniMapView(GameCharacter* gc);
    virtual ~MiniMapView();

    virtual void draw() override;

private:
    int x, y;
    bool visible;
    GameCharacter* subject;
};


#endif //OBSERVER_MINIMAPVIEW_H
