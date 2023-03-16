/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:31:13 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/26 20:26:11 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria {
	public:
		AMateria*	clone() const;
		void		use(ICharacter& target);

	Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);
	~Cure();
};

#endif