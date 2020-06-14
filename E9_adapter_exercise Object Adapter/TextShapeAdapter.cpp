//
// Created by Francesco Mazzola on 14/06/2020.
//

#include "TextShapeAdapter.h"

TextShapeAdapter::TextShapeAdapter(std::string name, int font ){
    t.reset(new Text(name, font));
}

TextShapeAdapter:: TextShapeAdapter(Text * y){
    t.reset(y);
}

void TextShapeAdapter::draw() {
    t->print();
}
void TextShapeAdapter::resize(float newSize) {
    t->setFontSize(int(newSize));
}