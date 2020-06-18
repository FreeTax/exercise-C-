//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "TextElement.h"

TextElement::TextElement(std::string t) : text(t) {

    fontSize = 12;
}

const std::string &TextElement::getText() const {
    return text;
}

void TextElement::setText(const std::string &text) {
    TextElement::text = text;
}

int TextElement::getFontSize() const {
    return fontSize;
}

void TextElement::setFontSize(int fontSize) {
    TextElement::fontSize = fontSize;
}

void TextElement::draw() {
    std::cout << "i'm pronting a text :" << text << "on position" << getPosX() << getPosY() << std::endl;
}
