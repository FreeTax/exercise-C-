#include <vector>
#include "Shape.h"
#include "Sprite.h"
#include "Tile.h"
#include "Text.h"
#include "TextShapeAdaptter.h"


int main() {
    // TODO use smart pointers instead of raw pointers
    std:: vector<std::shared_ptr<Shape>> drawingElements;

    std::shared_ptr<Shape> hero ( new Sprite("hero.bmp"));
    std::shared_ptr<Shape> monster (new Sprite("troll.bmp", 150, 300));
    std::shared_ptr<Shape> floor ( new Tile("map_tiles.bmp", 0));
    std::shared_ptr<Shape>  wall (new Tile("map_tiles.bmp"));

    drawingElements.push_back(hero);
    drawingElements.push_back(monster);
    drawingElements.push_back(wall);
    drawingElements.push_back(floor);
    Text hitPoints("HP: ", 12);
    std::shared_ptr<Shape> s1 (new TextShapeAdaptter("Level:", 14));
    if(s1)
        drawingElements.push_back(std::move(s1));

    for(auto iter: drawingElements)
       iter->draw();
    // TODO add a text reporting "Level: " with font size 14
    // add text to drawingElements

    // TODO iterate an all the elements of drawingElements, resize each element by 1.2 and draw it


    return 0;
}