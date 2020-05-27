#include <iostream>
#include "Data.h"
using namespace std;
int main() {
    Data *d1= new Data(31, 12, 2024);
    cout << d1->GetData()<<endl;
    cout<<d1->validate()<<endl;
}
