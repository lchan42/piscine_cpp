/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:39:46 by lchan             #+#    #+#             */
/*   Updated: 2022/11/02 12:30:32 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <limits>
#include <climits>
#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>
#include <list>
#include <stack>

//template <class T>
template <typename T>
class MutantStack : public std::stack<T>{

	public:
		MutantStack(){};
		MutantStack(MutantStack const &cpy) : std::stack<T> (cpy){/*(this->c = cpy.c);*/};
		//MutantStack(MutantStack const &cpy) : std::stack<T>(cpy){};
		~MutantStack(){};

		MutantStack&	operator=(MutantStack const &rhs) {this->c = rhs.c; return *this;};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(){return(this->c.begin());}
		iterator	end(){return(this->c.end());}

	private:

};

#endif
