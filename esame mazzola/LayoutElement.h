//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESAME_MAZZOLA_LAYOUTELEMENT_H
#define ESAME_MAZZOLA_LAYOUTELEMENT_H
#include "DocumentElement.h"
#include "iostream"
#include "list"

class LayoutElement {
public:
    void draw();

    void AddElement(DocumentElement *d);

    void RemoveElement(DocumentElement *d);

private:
    std::list<DocumentElement *> elements;
};



#endif //ESAME_MAZZOLA_LAYOUTELEMENT_H
