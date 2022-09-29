/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:24:50 by lchan             #+#    #+#             */
/*   Updated: 2022/09/29 12:03:18 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	fromStringToInt(std::string usrInput){

	std::stringstream	stream;
	int					i;

	stream << usrInput;
	stream >> i;
	return (i);
}

std::string	fromIntToString(int i){

	std::stringstream	stream;
	std:: string		ret;

	stream << i;
	stream >> ret;
	return (ret);
}

void	printAllClassStats(){

	ClapTrap ClapTrap("ClapT");
	ScavTrap ScavTrap("ScavT");
	FragTrap FragTrap("FragT");
	DiamondTrap DiamondTrap("DiamT");

	ClapTrap.printStats();
	ScavTrap.printStats();
	FragTrap.printStats();
	DiamondTrap.printStats();
}

int	main( void ){

	std::string enemyName = "Grosse Brutasse ";
	DiamondTrap DiamondT("SmallD");
	ClapTrap	ClapTrap("Clap");

	DiamondT.attack(enemyName);
	DiamondT.whoAmI();
	printAllClassStats();
	return (0);
}