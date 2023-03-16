/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:17:52 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/26 20:25:04 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria {
	public:
		AMateria*	clone() const;
		void		use(ICharacter& target);

	Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	~Ice();
};

#endif