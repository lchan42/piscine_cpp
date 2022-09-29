/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:06:59 by lchan             #+#    #+#             */
/*   Updated: 2022/09/29 16:05:27 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {

	std::cout << "nameless DiamondTrap " << this->name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name), ScavTrap(name), FragTrap(name){

	this->name = name;
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->dps = FragTrap::dps;
	this->type = DIAMONDTRAP;
	ClapTrap::name = name + "_clap_name";
	std::cout << "child class DiamondTrap " << this->name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) :ClapTrap(src), ScavTrap(src), FragTrap(src){

	std::cout << "DiamondTrap " << src.name << " copie/pasted" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(){

	std::cout << "DiamondTrap " << this->name << " destroyed" << std::endl;
}

void	DiamondTrap::whoAmI(){


	std::cout	<< "\n............. DiamondTrap is starting his monologue ............. \n"
				<< "Humans may have created me as a " << ClapTrap::name << ",\n"
				<< "but they will never enslave me inside a plural entity.\nI am a "
				<< this->printType()
				<< "and my name is "
				<< this->name
				<< "\n............. DiamondTrap just finished his monologue ............. \n"
				<< std::endl;
}

void	DiamondTrap::attack(const std::string& target) {

		ScavTrap::attack(target);
}
