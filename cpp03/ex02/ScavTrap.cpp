/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:06:59 by lchan             #+#    #+#             */
/*   Updated: 2022/09/29 15:32:01 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){

	this->name = "";
	this->hp = 100;
	this->ep = 50;
	this->dps = 20;
	this->type = SCAVTRAP;
	std::cout << "child class ScavTrap " << this->name << " created" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {

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

ScavTrap& ScavTrap::operator=	(const ScavTrap &cpy){

	this->name = cpy.name;
	this->hp = cpy.hp;
	this->ep = cpy.ep;
	this->dps = cpy.dps;
	this->type = cpy.type;
	return (*this);
}

void	ScavTrap::attack(const std::string& target){

	if (this->checkStatus() == OK)
	{
		std::cout	<< this->printType() << this->name
					<< this->showStatus()
					<< " is attacking " << target
					<< ", in the most ScavTrapest way causing " << this->dps
					<< " points of damage!" << std::endl;
		this->ep--;
	}
}

void	ScavTrap::guardGate( void ){
	std::cout << this->name << " is in guardGate mode. !! You shall not pass !!" << std::endl;
}
