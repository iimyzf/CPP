/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:04:58 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/23 20:07:49 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed calculateTriangleArea(Point p1, Point p2, Point p3)
{
	return Fixed(p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	area1, area2, area3;
	bool	has_neg, has_pos;

	area1 = calculateTriangleArea(point, a, b);
	area2 = calculateTriangleArea(point, b, c);
	area3 = calculateTriangleArea(point, c, a);

	has_neg = (area1 < 0) || (area2 < 0) || (area3 < 0);
	has_pos = (area1 > 0) || (area2 > 0) || (area3 > 0);

	return (has_neg && has_pos) ? false : true;
}