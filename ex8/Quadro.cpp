//
// Created by Francesco Mazzola on 28/05/2020.
//

#include "Quadro.h"

Quadro::Quadro(int lato, int posx, int posy) {
    this->lato=lato;
    this->posx=posx;
    this->posy=posy;
}

int Quadro::getLato() const {
    return lato;
}
int Quadro::getPosx(){
    return posx;
};
int Quadro::getPosy(){
    return posy;
};
