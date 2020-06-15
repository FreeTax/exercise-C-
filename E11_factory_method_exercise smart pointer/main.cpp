#include <iostream>
#include "GameCharacter.h"
#include "CharacterFactory.h"

int main() {
    // TODO create a factory

    // TODO use smart pointers
    CharacterFactory factory;

    std::unique_ptr<GameCharacter> hero= factory.createCharacter(CharacterType::Knight); // TODO use factory to create

    std::unique_ptr<GameCharacter> enemy=factory.createCharacter(CharacterType::Wizard); // TODO use factory to create


    hero->draw();
    enemy->draw();
    hero->move(1, 1);
    hero->fight(*enemy);
    enemy->move(2, 2);

    // XXX without smart pointers this code will leak... manual memory mgmt. required

    return 0;
}
