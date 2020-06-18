//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESAME_MAZZOLA_EX5_IMAGE_H
#define ESAME_MAZZOLA_EX5_IMAGE_H
#include "Document.h"
#include "iostream"

class Image: public Document {
public:
    Image(std::string n, std::string m, int h, int w, int t);
    void play() override;

    virtual ~Image();
};


#endif //ESAME_MAZZOLA_EX5_IMAGE_H
