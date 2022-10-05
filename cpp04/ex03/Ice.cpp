/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:18:23 by lchan             #+#    #+#             */
/*   Updated: 2022/10/05 15:05:35 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice() : AMateria::AMateria("Ice"){

	std::cout << "[Ice] constructor called" << std::endl;
}

Ice::Ice(Ice &cpy){

	*this = cpy;
	std::cout << "[Ice] cpy constructor called" << std::endl;

}

Ice::~Ice() {

	std::cout << "[Ice] destructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& rhs){
	AMateria::operator=(rhs);
	return (*this);
}

AMateria*	Ice::clone() const{
	AMateria* clone = new Ice;
	*clone = *this;

	return(clone);
}
