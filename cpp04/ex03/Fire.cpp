/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:18:23 by lchan             #+#    #+#             */
/*   Updated: 2022/10/05 16:31:42 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

/******************************
 *		Coplien Form
 * ****************************/
Fire::Fire() : AMateria::AMateria("fire")
{
	std::cout << "[Fire] constructor called" << std::endl;
}

Fire::Fire(Fire &cpy)
{
	*this = cpy;
	std::cout << "[Fire] cpy constructor called" << std::endl;
}

Fire::~Fire()
{
	std::cout << "[Fire] destructor called" << std::endl;
}

Fire&	Fire::operator=(const Fire& rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

/******************************
 *		inner Function
 * ****************************/
AMateria*	Fire::clone() const
{
	AMateria* clone = new Fire;
	*clone = *this;

	return(clone);
}
