#include <iostream>
#include <list>

void fillLitst(std::list<int>& l, int i, int j){
    for(i; i < j; i++){
        l.push_back(i+2);
    }
};

void printList(std::list<int> l){
    for(auto i:l){
        std::cout<<i<<std::endl;
    }
}
void removeFromValue(std::list<int>& l, int i){
    l.remove(i);
}
void finInList(std::list<int> l, int i){
    std::list<int>::iterator iter=std::find(l.begin(),l.end(),i);
    if(iter==l.end())
        std::cout<<"non ho trovato l'elemento "<<i<<std::endl;
    else
        std::cout<<"elemento "<<i<< " trovato!"<<std::endl;
}
int main() {
    std::list<int> l1;
    fillLitst(l1, 10,30);
    printList(l1);
    removeFromValue(l1, 31);
    printList(l1);
    finInList(l1, 12);
    finInList(l1,1);
    finInList(l1,25);
}
