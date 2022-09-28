/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:06:59 by lchan             #+#    #+#             */
/*   Updated: 2022/09/28 18:32:11 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){

	this->name = name;
	this->hp = 100;
	this->ep = 50;
	this->dps = 20;
	this->type = SCAVTRAP;
	std::cout << "child class ScavTrap " << this->name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src){

	std::cout << "ScavTrap " << src.name << " copie/pasted" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(){

	std::cout << "ScavTrap " << this->name << " destroyed :(" << std::endl;
}

ScavTrap& ScavTrap::operator=	(const ScavTrap &otherOne){

	this->name = otherOne.name;
	this->hp = otherOne.hp;
	this->ep = otherOne.ep;
	this->dps = otherOne.dps;
	this->type = otherOne.type;
	return (*this);
}

bool	ScavTrap::checkStatus(){

	std::string	typetab[3] = {"ClapTrap ", "ScavTrap ", "FragTrap "};
	std::string	deathMsgTab[3] = {" He was useless anyway", " Please dont repair him !", " Not a big lost"};

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

void	ScavTrap::guardGate( void ){
	std::cout << this->name << " is in guardGate mode. !! You shall not pass !!" << std::endl;
}
