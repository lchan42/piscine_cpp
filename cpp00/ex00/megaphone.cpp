/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:55:19 by lchan             #+#    #+#             */
/*   Updated: 2022/09/12 19:31:50 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <stdio.h>
#include <string>

int	main (int ac, char **av)
{
	int	tab_index = 0;

	if (ac > 1)
	{
		while (av[++tab_index])
			for(int i = 0; i < strlen(av[tab_index]); i++)
				putchar(toupper(av[tab_index][i]));
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

}
