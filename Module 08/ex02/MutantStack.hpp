/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:03:51 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/08 13:10:32 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include "iostream"
# include "deque"
# include "stack"
# include "iterator"
# include "list"
# include "vector"

template	<typename T, typename U = std::deque<T> >
class	MutantStack : public std::stack<T, U> {
	public:
		typedef	typename	U::iterator	iterator;
		typedef	typename	U::iterator	const_iterator;
		typedef	typename	U::iterator	reverse_iterator;
		
		iterator			begin() { return this->c.begin(); }
		iterator			end() { return this->c.end(); }
		const_iterator		begin() const { return this->c.begin(); }
		const_iterator		end() const { return this->c.end(); }
		reverse_iterator	rbegin() { return this->c.rbegin(); }
		reverse_iterator	rend() { return this->c.rend(); }

		MutantStack() {};
		MutantStack(const MutantStack& other) { *this = other; };
		MutantStack&	operator=(const MutantStack& other) { *this = other; return *this; };
		~MutantStack() {};
};

#endif