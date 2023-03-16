/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:09:33 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/25 21:36:25 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {
	private:
		Brain*	brain;

	public:
		Brain&	getBrain() const;
		void	makeSound() const;

	Dog();
	Dog(const Dog& other);
	Dog&	operator=(const Dog& other);
	virtual ~Dog();
};

#endif