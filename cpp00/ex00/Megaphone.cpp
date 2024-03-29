/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:55:19 by lchan             #+#    #+#             */
/*   Updated: 2022/09/16 15:40:06 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <stdio.h>
#include <string.h>

int	main (int ac, char **av)
{
	int	tab_index = 0;

	if (ac > 1)
	{
		while (av[++tab_index])
			for(size_t i = 0; i < strlen(av[tab_index]); i++)
				putchar(toupper(av[tab_index][i]));
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

}
