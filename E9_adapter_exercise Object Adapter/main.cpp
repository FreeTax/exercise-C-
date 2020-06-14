#include <vector>
#include "Shape.h"
#include "Sprite.h"
#include "Tile.h"
#include "Text.h"

int main() {
    // TODO use smart pointers instead of raw pointers
    std::vector<Shape *> drawingElements;

    Sprite* hero = new Sprite("hero.bmp");
    Sprite* monster = new Sprite("troll.bmp", 150, 300);
    Tile* floor = new Tile("map_tiles.bmp", 0);
    Tile* wall = new Tile("map_tiles.bmp");

    drawingElements.push_back(hero);
    drawingElements.push_back(monster);
    drawingElements.push_back(wall);
    drawingElements.push_back(floor);

    Text hitPoints("HP: ", 12);
    // TODO add a text reporting "Level: " with font size 14
    // add text to drawingElements

    // TODO iterate an all the elements of drawingElements, resize each element by 1.2 and draw it


    return 0;
}