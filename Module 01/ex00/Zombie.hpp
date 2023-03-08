/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 01:32:45 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/16 01:32:45 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class   Zombie {
	private:
		std::string name;

	public:
		void    	announce( void );
		void		set_name( std::string sname );
		std::string	get_name();
	
	Zombie (std::string cname);
	~Zombie();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif