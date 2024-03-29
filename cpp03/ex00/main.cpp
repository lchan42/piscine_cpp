/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:24:50 by lchan             #+#    #+#             */
/*   Updated: 2022/09/29 14:55:23 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ){

	ClapTrap c0;
	ClapTrap c1("c1");
	ClapTrap c2("c2");
	ClapTrap c3(c1);

	std::cout << "checking energy point" << std::endl;
	for (int i = 0; i < 12 ; i++)
		c1.attack("random enemy string");
	std::cout << "checking repair function on no ep c1" << std::endl;
	c1.beRepaired(10);
	std::cout << "checking repair function" << std::endl;
	c2.beRepaired(10);
	c2.attack("another random enemy string");
	c3 = c2;
	c3.attack("c2");
	return (0);
}
