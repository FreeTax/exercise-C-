#include <iostream>
#include <vector>
void fillVector(std::vector<int>& v, int i, int j){
    for(i; i<j; i++){
        v.push_back(i+2);
    }
}
void fillVector(std::vector<int>& v, int j){
    for(int i=0; i<j; i++){
        v.push_back(i+2);
    }
}
void removeVector(std::vector<int>& v, int i){
    if(i<v.size())
    v.erase(v.begin()+i);
}
bool findInVector(std::vector<int>& v, int i){
    std::vector<int>::iterator j=std::find(v.begin(), v.end(), i);
    if(j==v.end())
        return false;
    else
        return true;
}
int main() {
    std::vector<int> v1;
    fillVector(v1, 10,20);
    removeVector(v1, 3);
    findInVector(v1,14)? std::cout<<"trovato"<<std::endl : std::cout<<"non trovato"<<std::endl;
}
