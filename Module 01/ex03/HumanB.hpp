#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB {
    private:
        Weapon      *weapon;
        std::string name;
    public:
        void        attack();
        void        setWeapon(Weapon& weap);
    
    HumanB(const std::string newName);
    ~HumanB();
};

#endif