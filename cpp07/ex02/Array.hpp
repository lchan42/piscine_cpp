/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:33:25 by lchan             #+#    #+#             */
/*   Updated: 2022/10/20 20:28:25 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template<typename T>
class Array{
	public :

		Array<T>() : _tab(0), _size(0)
		{
			std::cout << "[Array] default destructor called" << std::endl;
		}

		Array<T>(unsigned int n) : _size (n)
		{
			std::cout << "[Array] param destructor called" << std::endl;
			if (n <= 0)
				throw std::overflow_error("invalid size\n");
			_tab = new T[n];

		}

		Array<T>(const Array &cpy)
		{
			*this = cpy;
		}

		~Array<T>()
		{
			if (_tab)
				delete[] (_tab);
		}

		Array<T> &operator=(const Array <T> &rhs){

			if (this == &rhs)
				return *this;
			if (_tab)
				delete[] (this->_tab);
			this->_size = rhs.size();
			this->_tab = new T[this->_size];
			for (int i = 0; i < this->_size; i++)
				this->_tab[i] = rhs[i];
			return (*this);
		}

		T & operator[](const int index) const
		{
			if (index >= this->_size)
				throw std::overflow_error("invalid size\n");
			return(this->_tab[index]);
		}

		int	size() const{
			return (_size);
		}
	private:
		T	*_tab;
		int	_size;

};

#endif
