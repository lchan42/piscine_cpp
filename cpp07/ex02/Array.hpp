/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:27:56 by lchan             #+#    #+#             */
/*   Updated: 2022/10/22 14:14:55 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

template <typename T>
class Array{
	private:
		T	*_tab;
		int	_size;

	public:
		Array<T>() : _tab(0), _size(0){

			std::cout << "[Array] default constructor called" << std::endl;
		}

		Array<T>(Array const & cpy){

			*this = cpy;
			std::cout << "[Array] cpy constructor called" << std::endl;
		}

		Array<T>(unsigned int n) : _size(n){

			if (n <= 0 )
				throw std::overflow_error("invalid size\n");
			_tab = new T [n];
			std::cout << "[Array] param constructor called" << std::endl;
		}

		~Array<T>(){

			if (this->_tab)
				delete [] (this->_tab);
			std::cout << "[Array] cpy destructor called" << std::endl;

		}

		Array<T> & operator=(Array const & rhs){

			if (&rhs == this)
				return(*this);
			if (this->_tab)
				delete[] (this->_tab);
			this->_size = rhs.size();
			if (rhs._tab)
			{
				this->_tab = new T [this->_size];
				for(int i = 0; i < _size; i++)
					this->_tab[i] = rhs[i];
			}
			else
				this->_tab = rhs._tab;
			return(*this);
		}

		T & operator[](int const index) const{

			if(index >= _size)
				throw std::overflow_error("overflow_error");
			return (_tab[index]);
		}
		int	size() const{

			return (_size);
		}
};
