/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:09:33 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/25 17:45:24 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal {
	public:
		void	makeSound() const;

	Dog();
	Dog(const Dog& other);
	Dog&	operator=(const Dog& other);
	~Dog();
};

#endif