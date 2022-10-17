/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:40:01 by lchan             #+#    #+#             */
/*   Updated: 2022/10/17 21:07:51 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/***********************************
 *		Constructor destructor
 ***********************************/
Convertor::Convertor() : _bitflag(0),_type(0) ,_char(0), _int(0), _double(0), _float(0)
{
	std::cout << "[Convertor] default constructor called" << std::endl;
}

Convertor::Convertor(Convertor const &cpy)
{

	*this = cpy;
	std::cout << "[Convertor] cpy constructor called" << std::endl;
}

Convertor::Convertor(std::string s) : _av(s), _bitflag(0),_type(0), _char(0), _int(0), _double(0), _float(0)
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
				o << c.getChar();
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

	if (31 < _converted && _converted < 127)
	{
		_char = static_cast<char>(_converted);
		return (YES);
	}
	std::cout << "isChar function says NO" << std::endl;
	return (NO);
}

int Convertor::isInt(void){

	if (_converted <= INT32_MAX && _converted >= INT32_MIN)
	{
		_int = static_cast<int>(_converted);
		return (YES);
	}
	std::cout << "isInt function says NO" << std::endl;
	return (NO);
}

int Convertor::isDouble(void){

	if (_converted <= DBL_MAX && _converted >= DBL_MIN)
	{
		_double = static_cast<double>(_converted);
		return (YES);
	}
	std::cout << "isDouble function says NO" << std::endl;
	return (NO);
}

int Convertor::isFloat(void){

	if (_converted <= std::numeric_limits<float>::max() && _converted >= std::numeric_limits<float>::min())
	{
		_float = static_cast<float>(_converted);
		return (YES);
	}
	std::cout << "isFloat function says NO" << std::endl;
	return (NO);
}

/***********************************
 *		inner function
 ***********************************/
void Convertor::setType(){

	int((Convertor::*tab[E_TYPE_NBR])()) = {&Convertor::isChar, &Convertor::isInt, &Convertor::isDouble, &Convertor::isFloat};

	for (int i = 0; i < E_TYPE_NBR; i++)
		if ((this->*tab[i])())
			_bitflag |= (1 << i);
	std::cout << "after set type _bitflag: " << _bitflag << std::endl;
}


void Convertor::convert(){

	char	*l;
	char	*d;
	char	*f;

	(strtol(_av.c_str(), &l, BASE_TEN));
	strtod(_av.c_str(), &d);
	strtof(_av.c_str(), &f);

	if (*l)
		_bitflag |= INT;
	if (*d)
		_bitflag |= DOUBLE;
	if (*f)
		_bitflag |= FLOAT;
	setType();
	std::cout << *this << std::endl;
	(void) _type;
}


// void Convertor::convert(){

// 	char	*p

// 	_converted = strtol(_av.c_str(), &p, BASE_TEN);
// 	_converted = strtod(_av.c_str(), &p);
// 	_converted = strtof(_av.c_str(), &p);

// 	if (*p)
// 	{
// 		std::cout << "convertion failed : incorrect imput" << std::endl;
// 		return;
// 	}
// 	else
// 	{
// 		setType();
// 		std::cout << *this << std::endl;
// 	}
// }
