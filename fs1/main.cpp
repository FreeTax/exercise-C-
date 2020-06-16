/*
 * (14 punti)
Implementare una classe template per la rappresentazione di matrici bidimensionali.
Implementare costruttore per copia e operatore di assegnazione, oltre a metodi per impostare e
leggere valori a determinate coordinate. Scrivere anche un costruttore che prenda in ingresso
dimensioni e valore di default degli elementi della matrice.
(*/
#include <iostream>
#include "Matrix.h"

int main() {
    std::unique_ptr<Matrix<int>>m(new Matrix<int>(10,20,30));
    m->print();
    m->InsertValue(1,2,5);
    std::cout<<std::endl;
    m->print();
}
