//
// Created by Francesco Mazzola on 28/05/2020.
//

#ifndef EX8_QUADRO_H
#define EX8_QUADRO_H


class Quadro {
public:
    Quadro(int lato, int posx, int posy);
    int getPosx();
    int getLato();
    int getPosy();

    int getLato() const;

private:
    int lato;
    int posx;
    int posy;
};


#endif //EX8_QUADRO_H
