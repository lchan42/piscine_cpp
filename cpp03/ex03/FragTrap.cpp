/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:06:59 by lchan             #+#    #+#             */
/*   Updated: 2022/09/28 21:02:26 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){

	this->name = name;
	this->hp = 100;
	this->ep = 100;
	this->dps = 30;
	this->type = FRAGTRAP;
	std::cout << "child class FragTrap " << this->name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src){

	std::cout << "FragTrap " << src.name << " copie/pasted" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(){

	std::cout << "FragTrap " << this->name << " destroyed" << std::endl;
}

// FragTrap& FragTrap::operator=	(const FragTrap &otherOne){

// 	this->name = otherOne.name;
// 	this->hp = otherOne.hp;
// 	this->ep = otherOne.ep;
// 	this->dps = otherOne.dps;
// 	this->type = otherOne.type;
// 	return (*this);
// }

void	FragTrap::attack(const std::string& target){

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

// bool	FragTrap::checkStatus(){

// 	std::string	typetab[3] = {"ClapTrap ", "FragTrap ", "FragTrap "};
// 	std::string	deathMsgTab[3] = {" He was useless anyway", " Please dont repair him !", " Not a big lost"};

// 	if (this->hp <= 0)
// 	{
// 		std::cout	<< typetab[this->type] << this->name
// 					<< this->showStatus()
// 					<< " is dead."
// 					<< deathMsgTab[this->type]
// 					<< std::endl;
// 		return (0);
// 	}
// 	else if (!this->ep)
// 	{
// 		std::cout	<< typetab[this->type] << this->name
// 					<< this->showStatus()
// 					<< " is too tired to do this action" << std::endl;
// 		return (0);
// 	}
// 	return (1);
// }

void FragTrap::highFivesGuys(void){
	std::string usrInput;

	std::cout << this->name << " is asking for a highfive (Y / N) ";

	getline(std::cin, usrInput);
	if (usrInput == "Y")
		std::cout << "you've made " << this->name << " the happiest FragTrap in the world" << std::endl;
	else {
		std::cout << "you've made " << this->name << " so sad he doesnt wanna live anymore" << std::endl;
		while (this->hp > 0) {
			this->attack(this->name);
			this->takeDamage(this->dps);
		}
		this->beRepaired(this->hp);
	}
}
