/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:02:26 by lchan             #+#    #+#             */
/*   Updated: 2022/10/07 11:58:44 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/
WrongCat::WrongCat()
{
	WrongAnimal::setType("WrongCat");
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy)
{
	*this = cpy;
	std::cout << "WrongCat cpy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

/*************************************
 *				Overloads
 * ***********************************/
WrongCat&	WrongCat::operator=(const WrongCat &rhs){

	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound(){

	std::cout << "Miaou miaou miaou miaou !!" << std::endl;
}
