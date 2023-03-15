/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:29:09 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/25 17:46:18 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public:
		void	makeSound() const;

	WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat&	operator=(const WrongCat& other);
	~WrongCat();
};

#endif