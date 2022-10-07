/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:15:10 by lchan             #+#    #+#             */
/*   Updated: 2022/10/06 13:05:17 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int	main(void){

	Zombie zStack("StackBob");
	Zombie *zHeap = newZombie("HeapBob");

	randomChump("RandomBob");
	zHeap->announce();
	zHeap->announce();
	zHeap->announce();
	delete zHeap;
}
