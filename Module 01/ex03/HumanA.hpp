/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:38:07 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/22 16:55:58 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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