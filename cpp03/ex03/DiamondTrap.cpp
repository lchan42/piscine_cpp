/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:06:59 by lchan             #+#    #+#             */
/*   Updated: 2022/09/28 21:40:14 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name), ScavTrap(name), FragTrap(name){

	this->name = name;
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->dps = FragTrap::dps;
	this->type = DIAMONDTRAP;
	std::cout << "child class DiamondTrap " << this->name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) :ClapTrap(src), ScavTrap(src), FragTrap(src){

	std::cout << "DiamondTrap " << src.name << " copie/pasted" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(){

	std::cout << "DiamondTrap " << this->name << " destroyed" << std::endl;
}

void	DiamondTrap::attack(const std::string& target){

	if (this->checkStatus() == OK)
	{
		std::cout	<< this->printType() << this->name
					<< this->showStatus()
					<< " is hitting " << target
					<< " with all his strengh, causing " << this->dps
					<< " points of damage!" << std::endl;
		this->ep--;
	}
}
