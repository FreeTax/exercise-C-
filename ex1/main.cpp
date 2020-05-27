#include <iostream>
#include "Contatore.h"
using N1::Contatore;
using namespace std;

int main() {
    Contatore *c1= new Contatore();
    for (int i=0; i<10; i++)
        c1->adder();
    cout<<c1->get_counter();
}
