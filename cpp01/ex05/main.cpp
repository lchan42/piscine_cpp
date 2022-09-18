/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:40:29 by lchan             #+#    #+#             */
/*   Updated: 2022/09/18 18:01:33 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av){

	if (ac > 1)
	{
		Harl	harl;
		harl.complain(av[1]);
	}
	else
		std::cerr << "Harl needs an argument" << std::endl;
	return (0);
}
