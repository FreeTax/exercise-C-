#ifndef OBSERVER_GAMECHARACTER_H
#define OBSERVER_GAMECHARACTER_H


#include "Subject.h"
#include "list"

// TODO change as needed
class GameCharacter: public Subject {
public:
    GameCharacter();
    virtual ~GameCharacter();

     virtual void subscribe(Observer * o) override ;
     virtual void unsubscri(Observer * o)override ;
    virtual void noitfy()override ;
    void move(int x, int y);

    int getPosX() const {
        return posX;
    }
    void setPosX(int posX) {
        this->posX = posX;
    }
    int getPosY() const {
        return posY;
    }
    void setPosY(int posY) {
        this->posY = posY;
    }

private:
    int posX, posY;
    std::list<Observer *> l;
};


#endif //OBSERVER_GAMECHARACTER_H
