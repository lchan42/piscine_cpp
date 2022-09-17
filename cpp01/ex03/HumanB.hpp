/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:46:32 by lchan             #+#    #+#             */
/*   Updated: 2022/09/17 18:02:26 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
	public :

		void	attack( void ) const;
		void	setWeapon(Weapon &weapon);

	HumanB(std::string name);
	~HumanB (void);

	private :
		std::string	name;
		Weapon		*weapon;

};

#endif
