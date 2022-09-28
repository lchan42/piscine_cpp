/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:08:25 by lchan             #+#    #+#             */
/*   Updated: 2022/09/28 21:33:04 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public virtual ClapTrap {

	public:
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate( void );

		// ScavTrap& operator=	(const ScavTrap &otherOne);

	private:

};
#endif
