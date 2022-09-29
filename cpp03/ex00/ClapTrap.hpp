/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:25:30 by lchan             #+#    #+#             */
/*   Updated: 2022/09/29 15:34:36 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"
# include "sstream"
# include "iomanip"

enum {
	ERR,
	OK
};

class ClapTrap {

	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();

		ClapTrap& operator=	(const ClapTrap &otherOne);

	private:
		std::string	name;
		int			hp;
		int			ep;
		int			dps;

		bool		checkStatus();
		std::string	showStatus();
};

#endif
