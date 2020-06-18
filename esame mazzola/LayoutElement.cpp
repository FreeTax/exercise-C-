//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "LayoutElement.h"

void LayoutElement::draw() {
    for (auto iter: elements)
        iter->draw();
}

void LayoutElement::RemoveElement(DocumentElement *d) {
    elements.remove(d);
}

void LayoutElement::AddElement(DocumentElement *d) {
    elements.push_back(d);
}