/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:25:30 by lchan             #+#    #+#             */
/*   Updated: 2022/09/28 14:28:59 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"
# include "sstream"
# include "iomanip"
# define NBRTYPE 3

enum {
	ERR,
	OK
};

enum {
	CLAPTRAP,
	SCAVTRAP,
	FRAGTRAP,
};

class ClapTrap {

	public:

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();

	ClapTrap& operator=	(const ClapTrap &otherOne);

	protected:

		bool		checkStatus();
		std::string	showStatus();
		std::string	printType();

		std::string	name;
		int			hp;
		int			ep;
		int			dps;
		int			type;

	private:


};

#endif
