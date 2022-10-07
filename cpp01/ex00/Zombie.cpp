/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:15:07 by lchan             #+#    #+#             */
/*   Updated: 2022/10/06 12:46:28 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {

	this->name = name;
	std::cout << "Zombie constructor called" << std::endl;
}

Zombie::Zombie( void ) {

	std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie() {

	std::cout << this->name << ": says bye bye" << std::endl;
}

void	Zombie::setName(std::string name){
	this->name = name;
}

void	Zombie::announce( void ){

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

