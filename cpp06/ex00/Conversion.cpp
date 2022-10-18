/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:40:01 by lchan             #+#    #+#             */
/*   Updated: 2022/10/18 14:15:13 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/***********************************
 *		Constructor destructor
 ***********************************/
Convertor::Convertor() : _bitflag(0),_char(0), _int(0), _double(0), _float(0)
{
	std::cout << "[Convertor] default constructor called" << std::endl;
}

Convertor::Convertor(Convertor const &cpy)
{

	*this = cpy;
	std::cout << "[Convertor] cpy constructor called" << std::endl;
}

Convertor::Convertor(std::string s) : _av(s), _bitflag(0), _char(0), _int(0), _double(0), _float(0)
{

	std::cout << "[Convertor] param constructor called" << std::endl;
}

Convertor::~Convertor()
{

	std::cout << "[Convertor] param destructor called" << std::endl;
}

/***********************************
 *		operator overload
 ***********************************/
Convertor &Convertor::operator=(Convertor const &rhs)
{

	_av = rhs._av;
	_converted = rhs._converted;
	_bitflag = rhs._bitflag;
	_char = rhs._char;
	_int = rhs._int;
	_double = rhs._double;
	_float = rhs._float;

	return (*this);
}

std::ostream & operator<<(std::ostream & o, Convertor & c){

	std::string s_tab[E_TYPE_NBR] = {"Char: ", "int: ", "double: ", "float: "};

	for (int i = 0; i < E_TYPE_NBR; i++)
	{
		o << s_tab[i];
		switch (((c.getBitFlag()) & (1 << i)) ? i : E_TYPE_NBR)
		{
			case CHAR:
				if (c.getChar() < 31 || c.getChar() >= 127)
					o << "Non displayable";
				else
					o << "'" << c.getChar() << "'";
				break;
			case INT:
				o << c.getInt();
				break;
			case DOUBLE:
				o << c.getDouble();
				break;
			case FLOAT:
				o << c.getFloat() << "f";
				break;
			default:
				o << "impossible";
				break;
		}
		o << "\n";
	}
	return (o);
}

/***********************************
 *		setter getter
 ***********************************/
char		Convertor::getChar(){
	return(_char);
}

int			Convertor::getInt(){
	return(_int);
}

double		Convertor::getDouble(){
	return(_double);
}

float		Convertor::getFloat(){
	return(_float);
}

int		Convertor::getBitFlag(){
	return(_bitflag);
}

int Convertor::isChar(void){

	if (0 <= _converted && _converted < 127)
	{
		_char = static_cast<char>(_converted);
		return (YES);
	}
	return (NO);
}

int Convertor::isInt(void){

	if (_converted <= INT32_MAX && _converted >= INT32_MIN)
	{
		_int = static_cast<int>(_converted);
		return (YES);
	}
	return (NO);
}

int Convertor::isDouble(void){

	if ((_converted <= DBL_MAX && _converted >= DBL_MIN) || _converted == 0)
	{
		_double = static_cast<double>(_converted);
		return (YES);
	}
	return (NO);
}

int Convertor::isFloat(void){

	if ((_converted <= std::numeric_limits<float>::max() && _converted >= std::numeric_limits<float>::min())
		|| _converted == 0)
	{
		_float = static_cast<float>(_converted);
		return (YES);
	}
	return (NO);
}

/***********************************
 *		inner function
 ***********************************/
void Convertor::setType(){

	int((Convertor::*tab[E_TYPE_NBR])()) = {
		&Convertor::isChar, &Convertor::isInt,
		&Convertor::isDouble, &Convertor::isFloat};

	for (int i = 0; i < E_TYPE_NBR; i++)
		if ((this->*tab[i])())
			_bitflag |= (1 << i);
}

int	Convertor::caseLitteral(){

	std::string	d_str;
	std::string	f_str;
	std::string litteral_tab[6] = {"-inff", "+inff" ,"nanf", "-inf", "+inf", "nan"};

	for (int i = 0; i < 6; i++)
	{
		if (_av == litteral_tab[i])
		{
			switch (i)
			{
			case 0: case 1: case 2:
				d_str = litteral_tab[i + 3];
				f_str = litteral_tab[i];
				break;
			default:
				d_str = litteral_tab[i];
				f_str = litteral_tab[i - 3];
				break;
			}
			std::cout << "Char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "double: " << d_str << std::endl;
			std::cout << "float: " << f_str << std::endl;
			return (YES);
		}
	}
	return (NO);
}

void Convertor::convert(){

	char	*d;

	if (caseLitteral())
		return ;
	else
	{
		_converted = strtod(_av.c_str(), &d);
		std::string s(d);
 		if (*d && s != "f")
		{
			std::cerr << "invalide entry" << std::endl;
			return;
		}
	}
	setType();
	std::cout << *this << std::endl;
}
