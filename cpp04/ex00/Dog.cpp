/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:00:53 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 18:03:00 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/
Dog::Dog()
{
	Animal::setType("Dog");
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& cpy)
{
	*this = cpy;
	std::cout << "Dog cpy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

/*************************************
 *				Overloads
 * ***********************************/
Dog&	Dog::operator=(const Dog &rhs){

	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound(){

	std::cout << "Woaf Woaf Woaf Woaf !!" << std::endl;
}
