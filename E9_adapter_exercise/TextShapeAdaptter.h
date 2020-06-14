//
// Created by Francesco Mazzola on 14/06/2020.
//

#ifndef E9_ADAPTER_EXERCISE_TEXTSHAPEADAPTTER_H
#define E9_ADAPTER_EXERCISE_TEXTSHAPEADAPTTER_H

#include "Shape.h"
#include "Text.h"


class TextShapeAdaptter: public Shape, private Text  {
public:
    explicit TextShapeAdaptter(const Text* t): Text(t->getText(), t->getFontSize()){}
    TextShapeAdaptter(std::string name, int font): Text(name, font){ }
    ~TextShapeAdaptter() { }
    void draw()override;
    void resize(float newSize) override;

};


#endif //E9_ADAPTER_EXERCISE_TEXTSHAPEADAPTTER_H
