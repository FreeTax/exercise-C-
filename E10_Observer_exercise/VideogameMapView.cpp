#include "VideogameMapView.h"

VideogameMapView::VideogameMapView(GameCharacter *gc) : subject(gc) {
    subject=gc;
}

VideogameMapView::~VideogameMapView() {
}

void VideogameMapView::draw() {
    std::cout << "VideogameMapView - x: " << x << " - y: " << y << std::endl;
}

void VideogameMapView::atach() {
    subject->subscribe(this);
}

void VideogameMapView::detach() {
    subject->unsubscri(this);
}

void VideogameMapView::update() {
    this->x=subject->getPosX();
    this->y=subject->getPosY();
    draw();
}

