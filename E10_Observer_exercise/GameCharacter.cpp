#include "GameCharacter.h"

GameCharacter::GameCharacter() : posX(0), posY(0) {
    // ... more code ...
}

GameCharacter::~GameCharacter() {
    // ... more code ...
}

void GameCharacter::move(int x, int y) {
    posX += x;
    posY += y;
}

void GameCharacter:: subscribe(Observer *o) {
    l.push_back(o);
}

void GameCharacter::unsubscri(Observer *o) {
    l.remove(o);
}

void GameCharacter::noitfy() {
    for(auto iter:l){
        iter->update();
    }
}

