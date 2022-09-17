/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:48:11 by lchan             #+#    #+#             */
/*   Updated: 2022/09/17 18:09:33 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack( void ) const{
	std::cout	<< this->name
				<< " attacks with their "
				<< this->weapon.getType()
				<< std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
	//std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA( void ){
	//std::cout << "HumanA destroyed" << std::endl;
}
