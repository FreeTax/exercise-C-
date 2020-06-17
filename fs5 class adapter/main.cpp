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

class Adapter: public virtual Elevator, private LegacyElevator{
public:
    Adapter(){}

    ~Adapter(){ };

    void move_to(int level) override{
        std::cout<<"i'm going to flor number "<<level<<std::endl;
        move_by(level-get_current_level());
    }
    using Elevator::open_doors;
    using Elevator::close_doors;
    void open_doors() override {
        LegacyElevator::open_doors();
    }
    void close_doors() override {
        LegacyElevator::close_doors();
    }
};
int main() {
    std::unique_ptr<Elevator> El(new Adapter());
    El->close_doors();
    El->open_doors();
}
