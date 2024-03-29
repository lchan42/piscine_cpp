/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:08:25 by lchan             #+#    #+#             */
/*   Updated: 2022/10/03 14:12:23 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
class DiamondTrap : public ScavTrap, public FragTrap {

	public:

		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap& cpy);

		void	attack(const std::string& target);
		void	whoAmI( void );


	private:
		std::string	name;

};
#endif
