/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:29:25 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/25 17:45:20 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal {
	public:
		void	makeSound() const;

	Cat();
	Cat(const Cat& other);
	Cat&	operator=(const Cat& other);
	~Cat();
};

#endif