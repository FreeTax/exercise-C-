#include <iostream>

class obj{
public:
    obj(int i, int j){
        a= new int(i);
        b= new int (j);
    }
    obj(obj & o){
        a=new int(o.getA());
        b=new int(o.getB());
    }

    int getA(){
        return *a;
    }

    int getB(){
        return *b;
    }


    void setA(int i){
        *a=i;
    }

    int *getB() const {
        return b;
    }

    void setB(int i){
        *b=i;
    };
    void print(){
        std::cout<<*a<<" "<<*b<<std::endl;
    }

private:
    int* a;
    int* b;
};
int main() {
    obj* alpha= new obj(1,2);
    alpha->print();
    obj* beta=alpha;//shallow copy, the pointer addres of var is the same!!! beta point to alpha address!!!
    alpha->setA(3);
    beta->print();
    obj* gamma=new obj(*beta);
    gamma->setA(10);
    alpha->print();
    gamma->print();

}
