/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:06:59 by lchan             #+#    #+#             */
/*   Updated: 2022/10/03 14:12:55 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(){
	this->name = "";
	this->ep = 50;
	this->type = DIAMONDTRAP;

	//std::cout << "nameless DiamondTrap " << this->name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	this->name = name;
	this->ep = 50;
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

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& cpy){

	this->name = cpy.name;
	this->hp = cpy.hp;
	this->ep = cpy.ep;
	this->dps = cpy.dps;
	this->type = cpy.type;
	return (*this);
}


void	DiamondTrap::whoAmI(){

	std::cout	<< "\n................ " << this->name << " is starting his monologue ................ \n"
				<< "\tHumans may have created me as a >>" << ClapTrap::name << "<<,\n"
				<< "\tbut they will never enslave me inside a single entity.\n\tI am plural, I am a "
				<< this->printType() << "and my name is >>" << this->name
				<< "<<\n................ " << this->name << " just finished his monologue ................ \n"
				<< std::endl;
}

void	DiamondTrap::attack(const std::string& target) {

		//ScavTrap::name = this->name;
		ScavTrap::attack(target);
}
