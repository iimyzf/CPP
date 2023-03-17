/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:43:25 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/01 22:18:10 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "iostream"

class	AForm;

class	Intern {
	public:
		class	NotFound : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		AForm*	makeForm(std::string name, std::string target);

	Intern();
	Intern(const Intern& other);
	Intern&	operator=(const Intern& other);
	~Intern();
};

#endif