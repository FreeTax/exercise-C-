//
// Created by Francesco Mazzola on 14/06/2020.
//

#ifndef E9_ADAPTER_EXERCISE_TEXTSHAPEADAPTER_H
#define E9_ADAPTER_EXERCISE_TEXTSHAPEADAPTER_H

#include "Text.h"
#include <memory>
#include "Shape.h"

class TextShapeAdapter :public Shape{
    explicit TextShapeAdapter(std::string Text, int font);
    TextShapeAdapter(Text * y);
    virtual void resize (float newSize) override;
    virtual void draw()override;

private:
    std::unique_ptr<Text> t;


};


#endif //E9_ADAPTER_EXERCISE_TEXTSHAPEADAPTER_H
