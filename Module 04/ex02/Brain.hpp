/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:18:02 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/25 22:35:51 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "iostream"

class	Brain {
	private:
		std::string	ideas[100];

	public:

	Brain();
	Brain(const Brain& other);
	Brain&	operator=(const Brain& other);
	~Brain();
};

#endif