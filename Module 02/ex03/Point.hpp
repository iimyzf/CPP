/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:12:01 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/14 18:47:32 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class	Point {
	private:
		Fixed const x;
		Fixed const	y;

	public:
		const Fixed& get_x() const;
		const Fixed& get_y() const;

	Point();
	Point(const float a, const float b);
	Point(const Point& other);
	Point&	operator=(const Point& other);
	Point	operator-(const Point& other) const;
	~Point();
	
	Point	operator-(const Point& other);

};

Point	operator*(const Point& p1, const Point& p2);
Point	operator-(const Point& p1, const Point& p2);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif