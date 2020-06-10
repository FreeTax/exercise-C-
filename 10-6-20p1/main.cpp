#include <iostream>
#include <string>

template <typename T>

//modo sbagliato di dichiarare una classe ma in certi casi il fine giustifica i mezzi... tanto sono cazzi del compliatore
class pluto{
public:
    static void sum(T&i, T&j){
        i+=j;
    }

};
template <>
class pluto <std::string>{
public:
    static void sum(std:: string& a, std::string& b){
        a="ciao mondo";
    }
};



int main() {
    int a=10;
    int b=12;
    std::string c="pippo";
    std::string d="pluto";
    pluto<int>::sum(a,b);
    std::cout<<a<<std::endl;
    pluto<std::string>::sum(c,d);
    std::cout<<c<<std::endl;
}
