#include <iostream>
#include "Derivate1.h"
#include "BaseClass.h"
#include "PrintFeature.h"
int main() {
    PrintFeature *p1;
    BaseClass *b1;
    Derivate1 d1;
    b1 = &d1;
    p1->doSomethings(b1);




}
