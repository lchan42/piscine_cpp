/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:18:23 by lchan             #+#    #+#             */
/*   Updated: 2022/10/05 17:50:41 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/******************************
 *		Coplien Form
 * ****************************/
Ice::Ice() : AMateria::AMateria("ice")
{
	std::cout << "[Ice] constructor called" << std::endl;
}

Ice::Ice(Ice &cpy)
{
	*this = cpy;
	std::cout << "[Ice] cpy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "[Ice] destructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

/******************************
 *		inner Function
 * ****************************/
AMateria*	Ice::clone() const
{
	AMateria* clone = new Ice;
	*clone = *this;

	return(clone);
}
