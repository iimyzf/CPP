/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:12:48 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/23 20:07:37 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	Point::getX() const { return x; }

Fixed	Point::getY() const { return y; }

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point&	Point::operator=(const Point& other) {
	getX() = other.x;
	getY() = other.y;
	return *this;
}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

std::ostream &operator<<(std::ostream &stream, const Point &p)
{
	return stream << "( " << p.getX().toFloat() << ", " << p.getY().toFloat() << " )";
}
