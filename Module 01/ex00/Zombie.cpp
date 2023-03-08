/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 01:32:41 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/16 01:32:41 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string cname) {
	name = cname;
}

Zombie::~Zombie() {
	std::cout << get_name() << ": Destroyed!" 
	<< std::endl;
}

std::string Zombie::get_name() {
	return name;
}

void    Zombie::set_name( std::string sname ) {
	name = sname;
}

void    Zombie::announce( void ) {
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
