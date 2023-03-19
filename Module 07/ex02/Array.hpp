/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 13:13:39 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/05 22:15:27 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
# define ARRAY_HPP

# include "iostream"

template	<typename T>
class	Array {
	private:
		T*				_data;
		unsigned int	_size;

	public:
		unsigned int	size() const {
			return _size;
		}

		Array() : _data(NULL), _size(0) {};

		Array(unsigned int n) : _data(new T[n]), _size(n) {};

		Array(const Array& other) : _data(new T[other._size]), _size(other._size) {
			for (unsigned int i = 0; i < _size; i++) {
				_data[i] = other._data[i];
			}
		};

		Array& operator=(const Array& other) {
			if (this != &other) {
				if (_size != other._size) {
					delete[] _data;
					_data = new T[other.size];
					_size = other._size;
				}
			
				for (unsigned int i = 0; i < _size; i++) {
					_data[i] = other._data[i];
				}
			}
			return *this;
		};

		T&	operator[](unsigned int index) {
			if (index >= _size)
				throw std::out_of_range("Index out of range.");
			return _data[index];
		}

		~Array() {
			delete[] _data;
		}
};

#endif