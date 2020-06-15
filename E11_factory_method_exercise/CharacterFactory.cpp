#include "CharacterFactory.h"
#include "Wizard.h"
#include "Knight.h"
#include <iostream>

CharacterFactory::CharacterFactory() {
    // ...
    std::cout << "Loading bitmap resources..." << std::endl;
    charactersBitmap = new unsigned char[10 * bitmapSize];
}

CharacterFactory::~CharacterFactory() {
    // ...
    delete[] charactersBitmap;
}

unsigned char* CharacterFactory::getBitmapTile(CharacterType type) {
    if (type == CharacterType::Knight) {
        return charactersBitmap; // XXX would return something from charactersBitmap
    } else {
        return charactersBitmap+bitmapSize; // XXX would return something from charactersBitmap
    }
}

GameCharacter* CharacterFactory:: createCharacter(CharacterType type){
    GameCharacter* result;
    if(type==CharacterType::Knight)
        result= new Knight;
    else
        result= new Wizard;
    result->setBitmap(getBitmapTile(type), bitmapSize);
    return result;
}