/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:25:08 by lchan             #+#    #+#             */
/*   Updated: 2022/09/17 18:09:16 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::getType( void ) {
	return (this->type);
}

void	Weapon::setType(std::string type){
	this->type = type;
}

Weapon::Weapon( void ){
	//std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon(std::string type){
	//std::cout << "Weapon constructor called" << std::endl;
	this->setType(type);
}

Weapon::~Weapon( void ){
	//std::cout << "Weapon destroyed" << std::endl;
}
