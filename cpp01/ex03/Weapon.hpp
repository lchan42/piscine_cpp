/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:20:40 by lchan             #+#    #+#             */
/*   Updated: 2022/09/17 18:09:17 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "iostream"

class Weapon {
	public :
		const std::string	&getType( void ) ;
		void				setType(std::string type);

	Weapon( void );
	Weapon(std::string type);
	~Weapon( void );

	private :
		std::string type;
};

#endif
