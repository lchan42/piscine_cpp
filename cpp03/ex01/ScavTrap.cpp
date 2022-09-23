/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:06:59 by lchan             #+#    #+#             */
/*   Updated: 2022/09/23 19:10:59 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SvapTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : name(name), hp(10), ep(10), dps(0), type(SCAVTRAP){

	std::cout << "ScavTrap " << this->name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src){

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
	return (*this);
}
