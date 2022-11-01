/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:39:46 by lchan             #+#    #+#             */
/*   Updated: 2022/11/01 19:49:18 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <limits>
#include <climits>
#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>
#include <list>

class Span{
	public:
		Span(unsigned int N);
		Span(Span const & cpy);
		~Span();

		Span & operator=(Span const & rhs);

		void	displayLst(void);
		void	addNumber(int toAdd);
		// void	addNumberX(int* array, int N);
		// void	addNumberN(std::vector<int> lst);
		void	addNumber(std::list<int>::iterator it, std::list<int>::iterator ite);
		int		shortestSpan();
		int		longestSpan();

	private:
		Span();
		unsigned int	_Max;
		//unsigned int	_index;@
		std::list<int>	_storage;
};

#endif
