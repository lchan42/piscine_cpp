/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:24:50 by lchan             #+#    #+#             */
/*   Updated: 2022/09/29 15:39:33 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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
	int			Nbr;

	std::cout << "how many FragTrap do you want? ";
	getline(std::cin, usrInput);
	std::cout << std::endl;
	Nbr = fromStringToInt(usrInput);
	for(int i = 0; i < Nbr; i++)
	{
		std::cout << "....... Creating Frag nbr " << i << " ......." << std::endl;
		FragTrap Frag("Frag" + fromIntToString(i));
	}
}

void	checkFragMethod(std::string enemyName){

	std::string usrInput;

	std::cout << "do you wanna check if attack/ takeDamage / beRepaired works (Y / N) : ";
		getline(std::cin, usrInput);
	std::cout << std::endl;
	if (usrInput == "Y")
	{
		FragTrap Frag1("Frag3000");

		std::cout << "....... checking FragTrap atack ......." << std::endl;
		for (int i = 0; i < 5 ; i++)
			Frag1.attack(enemyName);
		std::cout << "....... checking FragTrap takeDamage function  ......." << std::endl;
		for (int i = 0; i < 5 ; i++)
			Frag1.takeDamage(25);
		std::cout << "....... checking FragTrap beRepair function ......." << std::endl;
		FragTrap Frag2("FragPheonix");
		for (int i = 0; i < 5; i++){
			Frag2.takeDamage(33);
		 	Frag2.beRepaired(20);
		}
		std::cout << "....... checking FragTrap = operator ......." << std::endl;
		FragTrap Frag3 = Frag2;
	}
}

void	checkFragSpe(){

	std::string usrInput;

	std::cout << "....... checking highFivesGuys function ......." << std::endl;
	std::cout << "do you wanna test Happy Frag Special Method ? (Y / N) ";
	getline(std::cin, usrInput);
	if (usrInput == "Y")
	{
		std::cout << "Are you sure FragTrap are very sensitive entities ? (Y / N) ";
		getline(std::cin, usrInput);
		if (usrInput == "Y")
		{
			FragTrap Frag2("HappyFrag");
			Frag2.highFivesGuys();
		}
	}
}

void	checkMotherClass(std::string enemyName){

	std::cout << "....... checking if mother class still works ......." << std::endl;
	ClapTrap Clap1("TheOneAndOnlyClap");
	for (int i = 0; i < 5 ; i++)
		Clap1.attack(enemyName);
	Clap1.beRepaired(0);
	Clap1.takeDamage(100);
	Clap1.attack(enemyName);
}


int	main( void ){

	std::string enemyName = "Grosse Brutasse ";

	std::cout << ">>>>>>>>>>>>>> checking constructor / destructor order <<<<<<<<<<<<<< " << std::endl;
	orderTest();
	std::cout << ">>>>>>>>>>>>>> checking function inheritance <<<<<<<<<<<<<< " << std::endl;
	checkFragMethod(enemyName);
	std::cout << ">>>>>>>>>>>>>> checking special function <<<<<<<<<<<<<< " << std::endl;
	checkFragSpe();
	//checkMotherClass(enemyName);
	return (0);
}
