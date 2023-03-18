/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:15 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/03 18:12:52 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BASE_HPP
# define BASE_HPP

# include "ctime"
# include "iostream"

class	Base {
	public:
		virtual	~Base();
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif