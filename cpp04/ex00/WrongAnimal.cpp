/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:31:10 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 16:13:06 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/

WrongAnimal::WrongAnimal() : type("Wronganimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) : type("Wronganimal")
{
	*this = cpy;
	std::cout << "WrongAnimal constructor by copy called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}


/*************************************
 *			Operator overloads
 * ***********************************/

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.type;
	return (*this);
}


/*************************************
 *			Setter/Getter
 * ***********************************/

std::string	WrongAnimal::getType()
{
	return (this->type);
}

void		WrongAnimal::setType(std::string type)
{
	this->type = type;
}


/*************************************
 *			member function
 * ***********************************/
void	WrongAnimal::makeSound()
{
	std::cout << "Unknown Wronganimal sound" << std::endl;
}
