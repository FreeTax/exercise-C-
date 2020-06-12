#include <iostream>
#include <memory>

template <typename T>
void doSomethings(std::shared_ptr<T> i){
    *i=*i+2;

}
int main() {
    std::shared_ptr<int> p(new int(8)); //if this was unique_ptr i cant pass this to the function!
    doSomethings(p);
    std::cout<<*p;

}
