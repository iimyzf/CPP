/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:22:33 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/23 16:49:08 by yagnaou          ###   ########.fr       */
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
    	int		getRawBits() const;
    	void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed& other) const ;
		bool	operator<(const Fixed& other) const ;
		bool	operator>=(const Fixed& other) const ;
		bool	operator<=(const Fixed& other) const ;
		bool	operator==(const Fixed& other) const ;
		bool	operator!=(const Fixed& other) const ;

		Fixed	operator+(const Fixed& other);
		Fixed	operator-(const Fixed& other);
		Fixed	operator*(const Fixed& other);
		Fixed	operator/(const Fixed& other);

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static			Fixed& min(Fixed& a, Fixed& b);
		static const	Fixed& min(const Fixed& a, const Fixed& b);
		static			Fixed& max(Fixed& a, Fixed& b);
		static const 	Fixed& max(const Fixed& a, const Fixed& b);

	Fixed(const Fixed& other);
	Fixed(const int i);
	Fixed(const float f);
	Fixed& operator=(const Fixed& other);
	Fixed();
	~Fixed();
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& fixed);

#endif