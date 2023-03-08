/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 01:36:11 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/16 01:36:11 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string*	stringPTR;
    std::string&	stringREF = str;

	stringPTR = &str;

    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR     : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF     : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable         : " << str << std::endl;
    std::cout << "The value pointed to by stringPTR        : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF        : " << stringREF << std::endl;
    return (0);
}