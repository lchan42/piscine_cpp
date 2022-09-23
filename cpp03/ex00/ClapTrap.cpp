/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:29:40 by lchan             #+#    #+#             */
/*   Updated: 2022/09/23 18:21:45 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/******************************************
 *	Constructor / destructor
 * ****************************************/
ClapTrap::ClapTrap(const std::string &name) : name(name), hp(10), ep(10), dps(0){

	std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src){

	std::cout << "ClapTrap " << src.name << " copie/pasted" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(){

	std::cout << "ClapTrap " << this->name << " destroyed :(" << std::endl;
}

ClapTrap& ClapTrap::operator=	(const ClapTrap &otherOne){

	this->name = otherOne.name;
	this->hp = otherOne.hp;
	this->ep = otherOne.ep;
	this->dps = otherOne.dps;
	return (*this);
}

/******************************************
 *	public function
 * ****************************************/
void	ClapTrap::attack(const std::string& target){

	if (this->checkStatus() == OK)
	{
		std::cout	<< "ClapTrap " << this->name
					<< this->showStatus()
					<< " attacks " << target
					<< ", causing " << this->dps
					<< " points of damage!" << std::endl;
		this->ep--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){

	if (this->checkStatus() == OK)
	{
		std::cout	<< "ClapTrap " << this->name
					<< this->showStatus()
					<< " takes " << amount
					<< " points of damage!" << std::endl;

		this->hp -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (this->checkStatus() == OK)
	{
		std::cout	<< "ClapTrap " << this->name
					<< this->showStatus()
					<< " regains " << amount
					<< " hp!" << std::endl;

		this->hp += amount;
		this->ep--;
	}
}

bool	ClapTrap::checkStatus(){

	if (!this->hp)
	{
		std::cout	<< "ClapTrap " << this->name
					<< this->showStatus()
					<< " is dead and dead robot can not attack" << std::endl;
		return (0);
	}
	else if (!this->ep)
	{
		std::cout	<< "ClapTrap " << this->name
					<< this->showStatus()
					<< " is tired. Try again tomorrow" << std::endl;
		return (0);
	}
	return (1);
}

std::string	ClapTrap::showStatus(){

	std::stringstream	stream;
	std::string			ret;

	stream	<< " (" << this->hp << "/"
			<< std::setw(2) << this->ep << ")"
			<< std::endl;
	std::getline(stream, ret);
	return (ret);
}
