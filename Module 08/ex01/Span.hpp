/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:58:38 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/07 21:10:40 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP

# include "iostream"
# include "vector"

class	Span {
	private:
		std::vector<int>	data;
		unsigned int		max_size;
		
	public:
		void			addNumber(int i);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			addRange(int *i, int *j);
	
	Span();
	Span(unsigned int n);
	Span(const Span& other);
	Span&	operator=(const Span& other);
	~Span();
};

#endif