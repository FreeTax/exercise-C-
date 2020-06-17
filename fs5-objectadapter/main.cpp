#include <iostream>

class LegacyElevator {
public:
    LegacyElevator() {
        flor=0;
    }
    int get_current_level() const{
        return flor;
    }
    void move_by(int level){
        flor+=level;
        std::cout<<level<<std::endl;
    }
    void open_doors(){
        std::cout<<"open dore"<<std::endl;
    }
    void close_doors(){
        std::cout<<"close dore"<<std::endl;
    }

private:
    int flor;
};

class Elevator {
public:
    virtual void move_to(int level) = 0;
    virtual void open_doors() = 0;
    virtual void close_doors() = 0;
    virtual ~Elevator() { }
};

class Adapter: public Elevator {

public:
    Adapter(LegacyElevator * l) {
        pL.reset(l);
    }

    void move_to(int level) override{
        pL->move_by(level-pL->get_current_level());
    }

    void open_doors() override{
        pL->open_doors();
    }

    void close_doors() override{
        pL->close_doors();
    }

    ~Adapter() {

    }


    std::unique_ptr<LegacyElevator> pL;



};





int main() {
    LegacyElevator * pL= new LegacyElevator();
    std::unique_ptr<Elevator> pE;
    pE.reset(new Adapter(std::move(pL)));
    pE->open_doors();
    pE->close_doors();
}
