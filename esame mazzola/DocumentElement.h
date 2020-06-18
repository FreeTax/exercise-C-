//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESAME_MAZZOLA_DOCUMENTELEMENT_H
#define ESAME_MAZZOLA_DOCUMENTELEMENT_H


class DocumentElement {
public:
    DocumentElement() {
        posX=0;
        posY=0;
    };

    virtual void draw() = 0;

    int getPosX() const;

    void setPosX(int posX);

    int getPosY() const;

    void setPosY(int posY);

    virtual ~DocumentElement() = default;

private:
    int posX, posY;
};


#endif //ESAME_MAZZOLA_DOCUMENTELEMENT_H
