#include "SurveillanceCamera.h"
#include "SurveillanceControl.h"


int main() {
    SurveillanceCamera *c1 = new SurveillanceCamera("salotto", "killer");
    SurveillanceCamera *c2 = new SurveillanceCamera("cucina", "gatto");
    SurveillanceCamera *c3 = new SurveillanceCamera("bagno", "ladro");
    SurveillanceCamera *c4 = new SurveillanceCamera("camera", "coccodrillo");
    SurveillanceCamera *c5 = new SurveillanceCamera("garage", "omar");
    SurveillanceControl *d2 = new SurveillanceControl(4, c1);
    d2->addCamera(c2);
    d2->addCamera(c3);
    d2->addCamera(c4);
    d2->addCamera(c5);
    c1->workingon();
    c2->workingon();
    c3->workingon();
    c4->workingon();
    c5->workingon();
}
