/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:57:28 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/23 20:21:41 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {

    Point a(0, 0);
    Point b(1, 4);
    Point c(5, 2);

    Point point1(1, 1);
    Point point2(3, 4);

    std::cout << "Testing point1: (" << point1.getX() << ", " << point1.getY() << ")" << std::endl;
    if (bsp(a, b, c, point1)) {
        std::cout << "Point1 is inside the triangle" << std::endl;
    } else {
        std::cout << "Point1 is outside the triangle" << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Testing point2: (" << point2.getX() << ", " << point2.getY() << ")" << std::endl;
    if (bsp(a, b, c, point2)) {
        std::cout << "Point2 is inside the triangle" << std::endl;
    } else {
        std::cout << "Point2 is outside the triangle" << std::endl;
    }

    return 0;
}