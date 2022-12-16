#include "Weapon.hpp"

const std::string&	Weapon::getType() {
	return type;
}

void	Weapon::setType(const std::string& newType) {
	type = newType;
}

Weapon::Weapon() {

}

Weapon::Weapon(const std::string& type) {
	setType(type);
}

Weapon::~Weapon() {}
