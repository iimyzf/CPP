/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:39:01 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/07 12:51:33 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	
    std::vector<int> arr;
	
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);

    try {
    	easyfind(arr, 5);
		easyfind(arr, 9);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

    return 0;
}