/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:08:25 by lchan             #+#    #+#             */
/*   Updated: 2022/09/28 18:30:30 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : public ClapTrap {

	public:
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &src);
		~FragTrap();

		void	attack(const std::string& target);
		void	highFivesGuys(void);

		FragTrap& operator=	(const FragTrap &otherOne);

	private:
		//bool	checkStatus(void);

};
#endif
