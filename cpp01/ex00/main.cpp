/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:15:10 by lchan             #+#    #+#             */
/*   Updated: 2022/09/18 19:23:24 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name );

void	randomChump( std::string name );

int	main(void){

	Zombie zStack("StackBob");
	Zombie *zHeap = newZombie("HeapBob");

	randomChump("RandomBob");
	delete zHeap;
}
