/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:02:26 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 19:09:05 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/
Cat::Cat() : brain(new Brain)
{
	Animal::setType("Cat");
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
 *				Overloads
 * ***********************************/
Cat&	Cat::operator=(const Cat &rhs){

	this->type = rhs.type;
	(Brain)(*(this->brain)) = (Brain)(*(rhs.brain));
	return (*this);
}

void	Cat::makeSound(){

	std::cout << "Miaou miaou miaou miaou !!" << std::endl;
}
