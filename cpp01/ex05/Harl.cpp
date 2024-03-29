/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:08:08 by lchan             #+#    #+#             */
/*   Updated: 2022/10/17 18:51:07 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	//std::cout << "constuctor called" << std::endl;
}

Harl::~Harl( void ){
	//std::cout << "destructor called" << std::endl;
}

void	Harl::debug( void ){
	std::cout << DEBUG_MESS << std::endl;
}

void	Harl::info( void ){
	std::cout << INFO_MESS << std::endl;
}

void	Harl::warning( void ){
	std::cout << WARNI_MESS << std::endl;
}

void	Harl::error( void ){
	std::cout << ERROR_MESS << std::endl;
}

void	Harl::dft( void ){
	std::cout << COMPL_MESS << std::endl;
}

typedef void (Harl::*callback_t)( void );

void	Harl::complain( std::string level ){

	int	i = -1;
	std::string names[KWN_PHRASE -1] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	callback_t callbacks[KWN_PHRASE] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::dft};

	while (++i < KWN_PHRASE - 1)
		if (names[i] == level)
			break ;
	(this->*callbacks[i])();
}
/*
facon de faire des pointeurs sur fonctions membre
		--> facon habituelle; <--
{
	void	((Harl::*callbacks[4])()) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
}

			--> facon Tony; <--
typedef void (Harl::*callback_t)( void );

{
	callback_t callbacks[4] = {
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error
	};
}

this -> pointeur sur instance courante
voir  difference instance et classe
*/

