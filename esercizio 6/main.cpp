#include "Srvcam.h"
#include "Srvcontrol.h"



int main() {
    Srvcam *c1 = new Srvcam("salotto", "killer");
    Srvcam *c2 = new Srvcam("cucina", "gatto");
    Srvcam *c3 = new Srvcam("bagno", "ladro");
    Srvcam *c4 = new Srvcam("camera", "coccodrillo");
    Srvcam *c5 = new Srvcam("garage", "omar");
    Srvcontrol * d2= new Srvcontrol(4, c1);
    c1->workingon();
    c2->workingon();
    c3->workingon();
    c4->workingon();
    c5->workingon();

}
