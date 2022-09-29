/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:24:50 by lchan             #+#    #+#             */
/*   Updated: 2022/09/29 19:03:41 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
void	printAllClassStats(){

	ClapTrap	ClapTrap;
	ScavTrap	ScavTrap;
	FragTrap	FragTrap;
	DiamondTrap	DiamondTrap;

	ClapTrap.printStats();
	ScavTrap.printStats();
	FragTrap.printStats();
	DiamondTrap.printStats();
}

int	main( void ){

	std::string enemyName = "Grosse Brutasse ";
	DiamondTrap DiamondT("lit'D");

	std::cout << "\n <<<<<<<<<<............>>>>>>>>>> showing stats <<<<<<<<<<............>>>>>>>>>>" << std::endl;
	printAllClassStats();
	std::cout << "\n <<<<<<<<<<............>>>>>>>>>> testing attack <<<<<<<<<<............>>>>>>>>>>" << std::endl;
	DiamondT.attack(enemyName);
	std::cout << "\n <<<<<<<<<<............>>>>>>>>>> testing whoAmI <<<<<<<<<<............>>>>>>>>>>" << std::endl;
	DiamondT.whoAmI();
	std::cout << "\n <<<<<<<<<<............>>>>>>>>>> testing whoAmI <<<<<<<<<<............>>>>>>>>>>" << std::endl;
	return (0);
}
