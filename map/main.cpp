#include <iostream>
#include <map>



template<typename T, typename U> void insert(std::map<T, U>& m, T index, U value) {
    m.insert({index, value});
}

template <typename T, typename U> bool find(std::map<T, U> m, T chey){
    auto i=m.find(chey);
    if(i==m.end())
        return false;
    else
        return true;
}

template <typename T, typename U> void remove(std::map<T, U>& m, T index){
    m.erase(index);
}

template <typename T, typename U> void print(std::map<T ,U> m){
    for( auto i:m){
        std::cout<<i.second<<std::endl;
    }
}

int main() {
    std::map<char, double> m1;
    insert<char, double>(m1,'a', 3.8);
    insert<char, double>(m1,'b', 4.7);
    insert<char, double>(m1,'c', 1.8);
    if(find(m1, 'c'))
        std::cout<<"Trovato!!"<<std::endl;
    else
        std::cout<<"palo"<<std::endl;
    print<char, double>(m1);
    remove<char, double>(m1, 'a');
    print<char, double>(m1);
}


