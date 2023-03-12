/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:12:01 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/23 20:07:20 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Fixed getX() const;
		Fixed getY() const;

	Point();
	Point(const float a, const float b);
	Point(const Point& other);
	Point&	operator=(const Point& other);
	~Point();
	
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &o, const Point &p);

#endif