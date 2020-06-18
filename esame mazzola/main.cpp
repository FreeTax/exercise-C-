#include <iostream>
#include "list"
#include "ImageElement.h"
#include "TextElement.h"
#include "LayoutElement.h"


int main() {
    DocumentElement *pd1 = new ImageElement("img1.jpg");
    pd1->setPosY(10);
    pd1->setPosX(20);
    DocumentElement *pd2 = new ImageElement("img2.png");
    pd2->setPosY(30);
    pd2->setPosX(40);
    DocumentElement *pd3 = new TextElement("Hello World");
    DocumentElement *pd4 = new TextElement("I'm a Text!");

    LayoutElement *pl1 = new LayoutElement();
    pl1->AddElement(pd1);
    pl1->AddElement(pd2);
    pl1->AddElement(pd3);
    pl1->AddElement(pd4);
    pl1->draw();


}



