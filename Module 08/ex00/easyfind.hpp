/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:54:46 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/07 21:20:34 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include "iostream"
# include "algorithm"
# include "vector"

template	<typename T>
void	easyfind(T& container, int value) {
	typename	T::iterator	i = std::find(container.begin(), container.end(), value);

	if (i != container.end())
		std::cout << "Value: " << value << " Found in the conatiner at position: " << i - container.begin() << std::endl;
	else
		throw std::runtime_error("Value not found!");
}

#endif