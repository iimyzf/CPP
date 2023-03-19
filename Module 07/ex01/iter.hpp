/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:26:35 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/05 21:59:35 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
# define ITER_HPP

# include "iostream"

template	<typename T, typename F>
void	iter(T* arr, unsigned int len, F fun) {
	for (unsigned int i = 0; i < len; i++) {
		fun(arr[i]);
	}
}

#endif