//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESAME_MAZZOLA_IMAGEELEMENT_H
#define ESAME_MAZZOLA_IMAGEELEMENT_H
#include "DocumentElement.h"

class ImageElement : public DocumentElement {
public:
    ImageElement(std::string f);

    void draw() override;

    const std::string &getFileName() const;

    void setFileName(const std::string &fileName);

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

    ~ImageElement() {

    }

private:
    std::string fileName;
    int width, height;
};


#endif //ESAME_MAZZOLA_IMAGEELEMENT_H
