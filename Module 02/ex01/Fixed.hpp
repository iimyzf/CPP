/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:33:18 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/13 18:42:32 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <ostream>

class Fixed {
	private:
    	int					value;
    	static const int	fractionalBits = 8;

	public:
    	int				getRawBits() const;
    	void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;

	Fixed();
	Fixed(const Fixed& other);
	Fixed(const int i);
	Fixed(const float f);
	Fixed& operator=(const Fixed& other);
	~Fixed();
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& fixed);

#endif