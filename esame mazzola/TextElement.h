//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESAME_MAZZOLA_TEXTELEMENT_H
#define ESAME_MAZZOLA_TEXTELEMENT_H
#include "DocumentElement.h"
#include <iostream>

class TextElement : public DocumentElement {
public:
    TextElement(std::string t);

    const std::string &getText() const;

    void setText(const std::string &text);

    int getFontSize() const;

    void setFontSize(int fontSize);

    void draw() override;

    ~TextElement() {

    }

private:
    std::string text;
    int fontSize;
};


#endif //ESAME_MAZZOLA_TEXTELEMENT_H
