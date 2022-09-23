/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SvapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:08:25 by lchan             #+#    #+#             */
/*   Updated: 2022/09/23 19:12:01 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public ClapTrap{

		ScavTrap(const std::string &name);
		ScavTrap(const ClapTrap &src);
		~ScavTrap();

		ScavTrap& operator=	(const ScavTrap &otherOne);

		private:
			std::string	name;
			int			hp;
			int			ep;
			int			dps;
			int			type;
};
#endif
