/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:02:26 by lchan             #+#    #+#             */
/*   Updated: 2022/10/06 12:10:09 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/
Cat::Cat() :  Animal("Cat"), brain(new Brain)
{
	//Animal::setType("Cat");
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
	*this = cpy;
	std::cout << "Cat cpy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

/*************************************
 *				getter/setter
 * ***********************************/
Brain*	Cat::getBrain()
{
	return (this->brain);
}

/*************************************
 *				Overloads
 * ***********************************/

Animal&	Cat::operator=(const Animal &rhs)
{
	std::cout << "Cat operator= called" << std::endl;
	this->type = rhs.type;
	*(this->brain) = *(rhs.brain);
	return (*this);
}

Cat&	Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat operator= called" << std::endl;
	this->type = rhs.type;
	*(this->brain) = *(rhs.brain);
	return (*this);
}

void	Cat::makeSound()
{
	std::cout << "Miaou miaou miaou miaou !!" << std::endl;
}
