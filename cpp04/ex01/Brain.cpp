/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:42:43 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 18:58:39 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/
Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	*this = cpy;
	std::cout << "Brain cpy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

/*************************************
 *				Overloads
 * ***********************************/
Brain&	Brain::operator=(const Brain &rhs){

	for(int i = 0; i < MAX_IDEA ; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
