/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:12:47 by lchan             #+#    #+#             */
/*   Updated: 2022/10/20 19:29:07 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(){

	std::string array[3] = {"coucou", "ca va ?", "toiiiiiii ?????"};
	int			*intTable = new int[5];

	intTable[0] = 42;
	intTable[1] = 422;
	intTable[2] = 4222;
	intTable[3] = 42222;
	intTable[4] = 422222;

	iter(intTable, 5, &printString);
	iter(array, 3, &printString);
}
