/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:24:50 by lchan             #+#    #+#             */
/*   Updated: 2022/09/23 18:37:09 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ){

	ClapTrap c1("c1");
	ClapTrap c2("c2");
	ClapTrap c3(c1);

	std::cout << "checking energy point" << std::endl;
	for (int i = 0; i < 12 ; i++)
		c1.attack("random enemy string");
	std::cout << "checking energy point" << std::endl;
	std::cout << "checking energy point" << std::endl;
	c2.beRepaired(10);
		c2.attack("another random enemy string");

	return (0);
}
