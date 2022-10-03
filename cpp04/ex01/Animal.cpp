/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:31:10 by lchan             #+#    #+#             */
/*   Updated: 2022/10/03 12:28:20 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/

Animal::Animal() : type("animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type){

	std::cout << "Animal param constructor called" << std::endl;
}

Animal::Animal(const Animal &cpy) : type("animal")
{
	*this = cpy;
	std::cout << "Animal constructor by copy called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


/*************************************
 *			Operator overloads
 * ***********************************/

Animal&	Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}


/*************************************
 *			Setter/Getter
 * ***********************************/

std::string	Animal::getType()
{
	return (this->type);
}

void		Animal::setType(std::string type)
{
	this->type = type;
}


/*************************************
 *			member function
 * ***********************************/
void	Animal::makeSound()
{
	std::cout << "Unknown animal sound" << std::endl;
}
