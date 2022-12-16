#include "HumanB.hpp"

void    HumanB::attack() {
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weap) {
    weapon = &weap;
}

HumanB::HumanB(const std::string newName) {
    name = newName;
}

HumanB::~HumanB() {}