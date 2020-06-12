#include <iostream>
#include <memory>
#include <string>

int main() {
    std::string s("aplha");
    try {
        s.at(10);
    }
    catch (std::exception& e){
        std::cerr<<e.what()<<std::endl;
    }

}
