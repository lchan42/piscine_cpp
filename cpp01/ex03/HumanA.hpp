/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:41:55 by lchan             #+#    #+#             */
/*   Updated: 2022/09/17 17:30:04 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
	public :

		void	attack( void ) const;

	HumanA(std::string name, Weapon &weapon);
	~HumanA (void);

	private :
		std::string	name;
		Weapon&		weapon;

};

#endif
