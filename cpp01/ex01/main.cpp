/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:15:10 by lchan             #+#    #+#             */
/*   Updated: 2022/09/17 16:05:09 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){

	Zombie *horde;
	int		N = 10;

	horde = zombieHorde(N, "Bob");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}
