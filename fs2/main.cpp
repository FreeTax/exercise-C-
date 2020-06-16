#include <iostream>

class Weapon { //weapon=arma
public:
    virtual void fire()=0;

    virtual ~Weapon() = 0;
};

Weapon::~Weapon() {}


//fucile assalto
class AssaultRifle : public Weapon { //fucile da assalto
public:
    void fire() override {
        std::cout << "i'm an AssaultRfle and i'm gonna kill you!" << std::endl;
    }

    virtual ~AssaultRifle() {}
};


//fucile cecchino
class SniperRfile : public Weapon { //fucile da cecchino
public:
    void fire() override {
        std::cout << "i'm an SnipperRrifle and i'm gonna kill you!" << std::endl;
    }

    virtual ~SniperRfile() {}
};


//roba fisica
class PhysicalFeature {
public:
    virtual ~PhysicalFeature() = 0;
};

PhysicalFeature::~PhysicalFeature() {}


//stamina
class Stamina : public PhysicalFeature {
    virtual ~Stamina(){ };
};


//respiro profondo

class HoldBreath : public PhysicalFeature {
    virtual ~HoldBreath(){ };
};


//questo è quello che mi interessa!
class Character {
public:
    virtual ~Character() = 0;

    void setPhysical(PhysicalFeature *aPF) {
        pf = aPF;
    }

    void setWeapon(Weapon *aW) {
        w = aW;
    }

    virtual void doSOmethings()=0;

protected:
    PhysicalFeature *pf;
    Weapon *w;
};

Character::~Character() {}


//assalitore
class AssaultTrooper : public Character {
public:
    AssaultTrooper(int s = 10) : strength(s) {
        setPhysical(new Stamina());
        setWeapon(new AssaultRifle());
    };

    virtual ~AssaultTrooper(){ };

    void doSOmethings() override {
        std::cout << "i'm not a stupid sniffer, im a fucking AssaltTrooper!" << std::endl;
    };
private:

    int strength;
};


//cecchino
class Sniper : public Character {
public:
    Sniper(int p = 10) :
            precision(p) {
        setWeapon(new SniperRfile);
        setPhysical(new HoldBreath());
    };

    virtual ~Sniper(){ };

    void doSOmethings() override {
        std::cout << "i'm not a stupid AssaltTrooper, i think before i shoot!" << std::endl;
    };
private:
    int precision;
};

class AbstractFactory {

};

int main() {
    Character *pTrooper = new AssaultTrooper();
    Character *pSnipper = new Sniper;

    //diamo inizio alla guerra
    pTrooper->doSOmethings();
    pSnipper->doSOmethings();


}
