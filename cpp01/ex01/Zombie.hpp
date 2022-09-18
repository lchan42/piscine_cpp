/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:22:17 by lchan             #+#    #+#             */
/*   Updated: 2022/09/17 16:36:17 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public :

		void	announce( void );
		void	setName(std::string name);

		Zombie(std::string name);
		Zombie( void );
		~Zombie( void );

	private :
		std::string	name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
