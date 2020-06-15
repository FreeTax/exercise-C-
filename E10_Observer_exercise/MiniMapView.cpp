#include "MiniMapView.h"

MiniMapView::MiniMapView(GameCharacter* gc) : visible(true) {
    // ... code ...
}

MiniMapView::~MiniMapView() {
}

void MiniMapView::draw() {
    if (visible) {
        std::cout << "Mini map - x: " << x << " - y: " << y << std::endl;
    }
}
