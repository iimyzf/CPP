/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:38:15 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/22 16:56:06 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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