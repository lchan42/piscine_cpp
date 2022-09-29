/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:29:40 by lchan             #+#    #+#             */
/*   Updated: 2022/09/29 15:52:07 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/******************************************
 *	Constructor / destructor
 * ****************************************/

ClapTrap::ClapTrap() : name(""){
	std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hp(10), ep(10), dps(0), type(CLAPTRAP){

	std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src){

	std::cout << "ClapTrap " << src.name << " copie/pasted" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(){

	std::cout << "ClapTrap " << this->name << " destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=	(const ClapTrap &cpy){

	this->name = cpy.name;
	this->hp = cpy.hp;
	this->ep = cpy.ep;
	this->dps = cpy.dps;
	return (*this);
}

/******************************************
 *	public function
 * ****************************************/
void	ClapTrap::attack(const std::string& target){

	if (this->checkStatus() == OK)
	{
		std::cout	<< this->printType() << this->name
					<< this->showStatus()
					<< " is gently cuddling " << target
					<< ", causing " << this->dps
					<< " points of damage!" << std::endl;
		this->ep--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){

	if (this->checkStatus() == OK)
	{
		std::cout	<< this->printType() << this->name
					<< this->showStatus()
					<< " takes " << amount
					<< " points of damage!" << std::endl;

		this->hp -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (this->checkStatus() == OK)
	{
		std::cout	<< this->printType() << this->name
					<< this->showStatus()
					<< " regains " << amount
					<< " hp!" << std::endl;

		this->hp += amount;
		this->ep--;
	}
}


bool	ClapTrap::checkStatus(){

	std::string	typetab[3] = {"ClapTrap ", "FragTrap ", "FragTrap "};
	std::string	deathMsgTab[3] = {" He was useless anyway", " Please dont repair him !", " Not a big lost btw"};

	if (this->hp <= 0)
	{
		std::cout	<< typetab[this->type] << this->name
					<< this->showStatus()
					<< " is dead."
					<< deathMsgTab[this->type]
					<< std::endl;
		return (0);
	}
	else if (!this->ep)
	{
		std::cout	<< typetab[this->type] << this->name
					<< this->showStatus()
					<< " is too tired to do this action" << std::endl;
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

std::string	ClapTrap::printType(){

	std::string			typetab[3] = {"ClapTrap ", "ScavTrap ", "FragTrap "};

	return (typetab[this->type]);
}
