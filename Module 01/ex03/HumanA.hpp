#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {
    private:
        Weapon      *weapon;
        std::string name;
    public:
        void        attack();
    
    HumanA(const std::string& newName, Weapon& weap);
    ~HumanA();
};

#endif