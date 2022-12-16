#include "HumanA.hpp"

void    HumanA::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA(const std::string& newName, Weapon& weap) {
	name = newName;
	weapon = &weap;
}

HumanA::~HumanA() {}