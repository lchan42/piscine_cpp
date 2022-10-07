/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:44:45 by lchan             #+#    #+#             */
/*   Updated: 2022/10/06 13:23:12 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack( void ) const{
	std::cout	<< this->name
				<< " attacks with his ";
	if (this->weapon)
		std::cout	<< this->weapon->getType()
					<< std::endl;
	else
		std::cout	<< "his strong muscular body"
					<< std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;

}

HumanB::HumanB(std::string name) : name(name){
	//std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB( void ){
	//std::cout << "HumanA destroyed" << std::endl;
}
