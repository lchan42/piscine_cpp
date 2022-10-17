/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:15:05 by lchan             #+#    #+#             */
/*   Updated: 2022/10/17 21:02:54 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <stdlib.h>
#include <limits>
#include <stdint.h>
#include <float.h>
#define BASE_TEN 10

enum e_type {
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	E_TYPE_NBR
};

enum e_choise{
	NO,
	YES
};

class Convertor{

	public:
		Convertor();
		Convertor(std::string s);
		Convertor(Convertor const &cpy);
		~Convertor();

		Convertor & operator=(Convertor const &rhs);

		void	convert();
		void	setType();
		//void	printAll();

		int			getBitFlag();
		char		getChar();
		int			getInt();
		double		getDouble();
		float		getFloat();

		int isChar();
		int isInt();
		int isDouble();
		int isFloat();


	private:
		std::string	_av;
		long		_converted;

		int			_bitflag;
		int			_type;
		char		_char;
		int			_int;
		double		_double;
		float		_float;
};

std::ostream & operator<<(std::ostream & o, Convertor & c);
typedef int (Convertor::*functionptr_t) ( void );

#endif
