/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:39:46 by lchan             #+#    #+#             */
/*   Updated: 2022/10/25 16:53:42 by lchan            ###   ########.fr       */
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
		int		shortestSpan();
		int		longestSpan();

	private:
		Span();
		unsigned int	_Max;
		//unsigned int	_index;@
		std::list<int>	_storage;
};

#endif
