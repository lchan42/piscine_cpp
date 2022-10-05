/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:18:23 by lchan             #+#    #+#             */
/*   Updated: 2022/10/05 17:51:00 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/******************************
 *		Coplien Form
 * ****************************/
Cure::Cure() : AMateria::AMateria("cure")
{
	std::cout << "[Cure] constructor called" << std::endl;
}

Cure::Cure(Cure &cpy)
{
	*this = cpy;
	std::cout << "[Cure] cpy constructor called" << std::endl;

}

Cure::~Cure()
{
	std::cout << "[Cure] destructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

/******************************
 *		inner Function
 * ****************************/
AMateria*	Cure::clone() const
{
	AMateria* clone = new Cure;
	*clone = *this;

	return(clone);
}
