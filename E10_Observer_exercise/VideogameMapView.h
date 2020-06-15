#ifndef OBSERVER_VIDEOGAMEMAPVIEW_H
#define OBSERVER_VIDEOGAMEMAPVIEW_H

#include "Observer.h"
#include "Display.h"
#include "GameCharacter.h"
#include <iostream>

// TODO change as needed
class VideogameMapView : public Display, public Observer {
public:
    VideogameMapView(GameCharacter* gc);
    virtual ~VideogameMapView();

    virtual void draw() override;
    virtual void atach() override ;
    virtual void detach()override;
    virtual void update() override ;


private:
    int x, y;
    GameCharacter* subject;
};


#endif //OBSERVER_VIDEOGAMEMAPVIEW_H
