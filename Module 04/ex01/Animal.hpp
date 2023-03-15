/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:22:32 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/27 18:49:41 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"

class	Animal {
	protected:
		std::string		type;
	
	public:
		std::string		getType() const;
		virtual void	makeSound() const;
	
	Animal();
	Animal(const Animal& other);
	Animal&	operator=(const Animal& other);
	virtual	~Animal();
};

#endif