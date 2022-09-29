/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:24:50 by lchan             #+#    #+#             */
/*   Updated: 2022/09/28 17:32:23 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

void	orderTest(){

	std::string usrInput;
	int			ScavNbr;

	std::cout << "how many ScavTrap do you want? ";
	getline(std::cin, usrInput);
	std::cout << std::endl;
	ScavNbr = fromStringToInt(usrInput);
	for(int i = 0; i < ScavNbr; i++)
	{
		std::cout << "....... Creating Scav nbr " << i << " ......." << std::endl;
		ScavTrap scav("Scav" + fromIntToString(i));
	}
}

void	checkFunction(){

	std::string enemyName = "Grosse Brutasse";
	std::string usrInput;

	std::cout << "do you wanna check if attack/ takeDamage / beRepaired works (Y / N) : ";
	getline(std::cin, usrInput);
	std::cout << std::endl;
	if (usrInput == "Y")
	{
		ScavTrap scav1("Scav3000");

		std::cout << "....... checking ScavTrap atack ......." << std::endl;
		for (int i = 0; i < 5 ; i++)
			scav1.attack(enemyName);
		std::cout << "....... checking ScavTrap takeDamage function  ......." << std::endl;
		for (int i = 0; i < 5 ; i++)
			scav1.takeDamage(25);
		std::cout << "....... checking ScavTrap beRepair function ......." << std::endl;
		ScavTrap scav2("ScavPheonix");
		for (int i = 0; i < 5; i++){
			scav2.takeDamage(33);
			scav2.beRepaired(20);
		}
		// std::cout << "....... checking ScavPheonix highFivesGuys function ......." << std::endl;
		// 	scav2.highFivesGuys();
		std::cout << "....... checking ScavPheonix guardGate function ......." << std::endl;
		scav2.guardGate();
		std::cout << "....... checking if mother class still works ......." << std::endl;
		ClapTrap Clap1("TheOneAndOnlyClap");
		for (int i = 0; i < 5 ; i++)
			Clap1.attack("Grosse Brutasse");
		Clap1.beRepaired(0);
		Clap1.takeDamage(100);
		Clap1.attack("Grosse Brutasse");
	}
}

int	main( void ){

	std::cout << ">>>>>>>>>>>>>> checking constructor / destructor order <<<<<<<<<<<<<< " << std::endl;
	orderTest();

	std::cout << ">>>>>>>>>>>>>> checking function inheritance <<<<<<<<<<<<<< " << std::endl;
	checkFunction();
	return (0);
}
