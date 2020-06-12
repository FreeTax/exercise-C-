#include <iostream>
#include <set>
#include <string>
template <typename T>
void printSet(std::set<T> s){
    for( auto i:s){
        std::cout<<i<<std::endl;
    }
}

template <typename T>
void findinSet(std::set<T> s, T i){
    auto pos = s.find(i);
    if(pos!=s.end())
        std::cout<<"trovato"<<std::endl;
    else
        std::cout<<"palo"<<std::endl;


}

int main() {
    std::set<int> s1;
    std::set<std::string> s2;
    s2.insert("omar");
    s2.insert("fralo");
    s2.insert("rir");
    s2.insert("salvomerda");
    s1.insert(10);
    s1.insert(5);
    printSet(s1);
    printSet(s2);
    s2.erase("salvomerda");
    printSet(s2);
    findinSet<std::string>(s2, "rir");
}
