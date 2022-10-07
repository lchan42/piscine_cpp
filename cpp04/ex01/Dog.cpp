/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:00:53 by lchan             #+#    #+#             */
/*   Updated: 2022/10/06 12:31:00 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/
Dog::Dog() : Animal("Dog"), brain(new Brain)
{
	//Animal::setType("Dog");
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& cpy)
{
	*this = cpy;
	std::cout << "Dog cpy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

/*************************************
 *				getter/setter
 * ***********************************/
Brain*	Dog::getBrain()
{
	return (this->brain);
}

/*************************************
 *				Overloads
 * ***********************************/
Dog&	Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog operator= called" << std::endl;
	this->type = rhs.type;
	*(this->brain) = *(rhs.brain);
	return (*this);
}

void	Dog::makeSound()
{
	std::cout << "Woaf Woaf Woaf Woaf !!" << std::endl;
}
