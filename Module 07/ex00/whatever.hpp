/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 10:43:08 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/05 21:51:36 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

# include "iostream"
# include "string"

template	<typename T>
void	swap(T& a, T& b) {
	T	tmp = a;
	a = b;
	b = tmp;
}

template	<typename T>
T	min(T a, T b) {
	return (a < b) ? a : b;
}

template	<typename T>
T	max(T a, T b) {
	return (a > b) ? a : b;
}

#endif