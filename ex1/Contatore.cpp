//
// Created by Francesco Mazzola on 27/05/2020.
//

#include "Contatore.h"

N1::Contatore::Contatore() {
    counter=0;
}

void N1::Contatore::adder() {
    counter+=1;
}

int N1::Contatore::get_counter() {
    return counter;
}
