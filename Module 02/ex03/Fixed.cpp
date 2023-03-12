/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:57:16 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/23 17:55:34 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw) { value = raw; }

float	Fixed::toFloat(void) const { return (float)value / (1 << fractionalBits); }
int		Fixed::toInt(void) const { return value >> fractionalBits; }

bool	Fixed::operator>(const Fixed& other) const { return value > other.value; }
bool	Fixed::operator<(const Fixed& other) const { return value < other.value; }
bool	Fixed::operator>=(const Fixed& other) const { return value >= other.value; }
bool	Fixed::operator<=(const Fixed& other) const { return value <= other.value; }
bool	Fixed::operator==(const Fixed& other) const { return value == other.value; }
bool	Fixed::operator!=(const Fixed& other) const { return value != other.value; }

Fixed	Fixed::operator+(const Fixed& other) {
	Fixed	newOne;
	newOne.value = value + other.value;
	return newOne;
}

Fixed	Fixed::operator-(const Fixed& other) {
	Fixed	newOne;
	newOne.value = value - other.value;
	return newOne;
}

Fixed	Fixed::operator*(const Fixed& other) {
	Fixed	newOne;
	newOne.value = (value * other.value >> fractionalBits);
	return newOne;
}

Fixed	Fixed::operator/(const Fixed& other) {
	Fixed	newOne;
	newOne.value = (value << fractionalBits) / other.value;
	return newOne;
}

Fixed&	Fixed::operator++() {
	value += 1;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	increment(*this);
	++(*this);
	return increment;
}

Fixed&	Fixed::operator--() {
	value -= 1;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	decrement(*this);
	--(*this);
	return decrement;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a.value < b.value) ? a : b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a.value > b.value) ? a : b;
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& fixed) {
    stream << fixed.toFloat();
    return stream;
}

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int i) {
	value = i << fractionalBits;
}

Fixed::Fixed(const float f) {
	value = f * (1 << fractionalBits);
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& other) : value(other.value) {}

Fixed& Fixed::operator=(const Fixed& other) {
	value = other.value;
	return *this;
}