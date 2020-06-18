//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "DocumentElement.h"

int DocumentElement::getPosX() const {
    return posX;
}

void DocumentElement::setPosX(int posX) {
    DocumentElement::posX = posX;
}

int DocumentElement::getPosY() const {
    return posY;
}

void DocumentElement::setPosY(int posY) {
    DocumentElement::posY = posY;
}
