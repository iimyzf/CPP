/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:12:48 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/14 18:53:36 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point&	Point::operator=(const Point& other) {
	if (this != &other) {
		const_cast<Fixed&>(x) = other.get_x();
    	const_cast<Fixed&>(y) = other.get_y();
	}
	return *this;
}

Point	operator-(const Point& p1, const Point& p2) {
	return Point(((p1.get_x()) - (p2.get_x())).toFloat(), 
	(p1.get_y() - p2.get_y()).toFloat());
}

const Fixed& Point::get_x() const {
	return x;
}

const Fixed& Point::get_y() const {
	return y;
}

Point	operator*(const Point& p1, const Point& p2) {
	return Point(p1.get_x() * p2.get_x());
}

Point::~Point() {}
