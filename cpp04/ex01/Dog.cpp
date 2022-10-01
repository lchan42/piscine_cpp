/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:00:53 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 19:13:24 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/
Dog::Dog() : brain(new Brain)
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
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

/*************************************
 *				Overloads
 * ***********************************/
Dog&	Dog::operator=(const Dog &rhs){

	this->type = rhs.type;
	//do I need to call brain destructor ?

	(Brain)(*(this->brain)) = (Brain)(*(rhs.brain));
	
	// *(this->brain) = *(rhs.brain);
	return (*this);
}

void	Dog::makeSound(){

	std::cout << "Woaf Woaf Woaf Woaf !!" << std::endl;
}
